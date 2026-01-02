#!/bin/bash

g++ 05.cpp -o 05

echo "1 1 1" 
echo "1 1 1" | ./05
echo -e "\n\n"

echo "1 2 2" 
echo "1 2 2" | ./05
echo -e "\n\n"


echo "2 1 3" 
echo "2 1 3" | ./05
echo -e "\n\n"


echo "1 2 3" 
echo "1 2 3" | ./05
echo -e "\n\n"


echo "60 2 4" 
echo "60 2 4" | ./05
echo -e "\n\n"
