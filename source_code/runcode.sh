#! /bin/bash

# Super simple program to compile and run my cpp code

file="$1"

echo "Starting Compilation Process..."
echo ""
g++ "$1"
echo "Code complied successfully"
echo ""
echo "Starting Execution"
echo ""
./a.out
echo ""
echo "Execution Done..."
