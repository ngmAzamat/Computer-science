#!/bin/bash

g++ 01.cpp -o 01

echo "1" 
echo "3" 
echo "1
3" | ./01
echo -e "\n\n"

echo "6" 
echo "1 2 3 4 5 6"
echo "6
1 2 3 4 5 6" | ./01
echo -e "\n\n"

echo "3" 
echo "6 4 4"
echo "3
6 4 4" | ./01
echo -e "\n\n"