#!/bin/bash

make

./solve_sudoku < tests/test1.txt
echo '==================='
./solve_sudoku < tests/test2.txt
