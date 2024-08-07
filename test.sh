#!/bin/bash


for i in {1..15}
do
    touch "file${i}.c"
    echo "// This is file ${i}" >> "file${i}.c"
done

for i in {1..15}
do
    git add "file${i}.c"
    git commit -m "Add file${i}.c"
    #git push origin main
done
