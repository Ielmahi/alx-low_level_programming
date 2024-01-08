#!/bin/bash

# Set your GitHub username and repository name
USERNAME="your_username"
REPO_NAME="your_repository"

# Create 33 files
for i in {1..100}
do
    touch "file${i}.c"
    echo "// This is file ${i}" >> "file${i}.c"
done

# Add, commit, and push each file
for i in {1..100}
do
    git add "file${i}.c"
    git commit -m "Add file${i}.c"
    git push origin main
done
