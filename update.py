import fnmatch
import os
import subprocess
from typing import List


class Updater:
    """Update files in the repository from the main branch."""

    def __init__(
        self,
        branch: str = "main",
        exclude_file: str = "exclude",
        save_dir: str = "docs/",
    ):
        self.branch = branch
        self.save_dir = save_dir
        self.experiments = ["EndSem"] + [f"Lab-{i}" for i in range(1, 9)]

        os.makedirs(save_dir, exist_ok=True)
        self.exclude = self.get_exclude(exclude_file)
        self.files = self.list_files()

    def get_exclude(self, file) -> List[str]:
        """Read patterns from file and return a list of patterns"""
        exclude: List[str] = []
        with open(file, "r") as file_handle:
            for line in file_handle.readlines():
                pattern = line.strip()
                if pattern and not pattern.startswith("#"):
                    exclude.append(pattern)
        return exclude

    def _exclude(self, file: str) -> bool:
        """Check if a file should be excluded"""
        for pattern in self.exclude:
            if fnmatch.fnmatch(file, pattern):
                return True
        return False

    def list_files(self) -> List[str]:
        """List all files in the repository, excluding patterns in self.exclude"""

        command = ["git", "ls-tree", "-r", self.branch, "--name-only"]
        result = subprocess.run(command, capture_output=True, text=True)

        if not result.returncode == 0:
            raise Exception("Failed to list files in the repository")

        all_files = result.stdout.splitlines()
        return [file for file in all_files if not self._exclude(file)]

    def _get_commit_hash(self) -> str:
        """Get the commit hash of the latest commit on the main branch"""
        command = f"git rev-parse {self.branch}"
        result = subprocess.run(command.split(), capture_output=True, text=True)

        if not result.returncode == 0:
            raise Exception(f"Failed to get commit hash on {self.branch} branch")

        return result.stdout.strip()

    def save_commit_hash(self):
        """Save the commit hash to a file"""
        commit_hash = self._get_commit_hash()
        with open("commit_hash", "w") as file_handle:
            file_handle.write(commit_hash)

    def fetch(self):
        """Fetch the files in the repository"""
        self.content: dict[str, str] = {}
        for file in self.files:
            command = f"git show {self.branch}:{file}"
            result = subprocess.run(command.split(), capture_output=True, text=True)

            if not result.returncode == 0:
                raise Exception(f"Failed to update {file}")

            self.content[file] = result.stdout

    def _update_home(self):
        file = os.path.join(self.save_dir, "README.md")
        with open(file, "w") as file_handle:
            file_handle.write(self.content["README.md"])

    def _create_experiments(self):
        """Create experiments in self.save_dir"""
        for experiment in self.experiments:
            file = os.path.join(self.save_dir, f"{experiment}.md")
            if os.path.exists(file):
                continue
            with open(file, "w") as file_handle:
                file_handle.write(f"# {experiment}\n\n")

    def _update_experiment(self, name: str):
        def segregate():
            experiment: dict[str, str] = {}
            for file, content in self.content.items():
                if file.startswith(f"{name}/"):
                    file = file.replace(f"{name}/", "")
                    if file.endswith(".c"):
                        experiment[file] = content
            return experiment

        def write(contents, file_handle):
            for title, content in contents.items():
                title = title.replace(".c", "")
                title = title.replace("Q", "Question-")
                file_handle.write(f"\n### {title}\n\n")
                file_handle.write("```c\n")
                file_handle.write(content)
                file_handle.write("```\n")

        questions = segregate()
        file = os.path.join(self.save_dir, f"{name}.md")
        with open(file, "w") as file_handle:
            file_handle.write(f"# {name}\n\n")
            file_handle.write("## Questions\n")
            write(questions, file_handle)

    def update(self):
        # self._update_home()
        # self._create_experiments()
        for experiment in self.experiments:
            self._update_experiment(experiment)


if __name__ == "__main__":
    pages = Updater()
    pages.fetch()
    pages.update()
    pages.save_commit_hash()