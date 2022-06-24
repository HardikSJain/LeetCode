#!/bin/bash
filename='README.md'
while (true); do
    read -p "Enter the #: " num
    read -p "Enter title: " title
    read -p "Enter link: " link
    read -p "Enter serial_no: " ans
    read -p "Enter difficulty: " difficulty
    read -p "Enter tag: " tag
    echo "| $num |[$title]($link) | [CPP](cpp_solutions/_$ans.cpp) | $difficulty | $tag |" >> $filename
    
    read -p "Do you want to add another row? (y/n) " yn
    case $yn in
        [Yy]* ) :;;
        [Nn]* ) break;;
        * ) echo "Please answer yes or no.";;
    esac
done