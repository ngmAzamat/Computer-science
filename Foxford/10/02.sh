#!/bin/bash

g++ 02.cpp -o 02

echo "1" 
echo "3" 
echo "1
3" | ./02
echo -e "\n\n"

echo "6" 
echo "1 2 3 4 5 6"
echo "6
1 2 3 4 5 6" | ./02
echo -e "\n\n"

echo "3" 
echo "6 4 4"
echo "3
6 4 4" | ./02
echo -e "\n\n"

echo "3" 
echo "7 7 7"
echo "3
7 7 7" | ./02
echo -e "\n\n"