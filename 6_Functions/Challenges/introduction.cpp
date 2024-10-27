/*
Created on Monday Oct 21 18:09:10 2024
Author: @righCirith
Module 7: Functions
Challenge 1: Introduction
*/

/*Instructions:
Write a function introduction() with no return value that has:
    - std::string parameter named first_name.
    - std::string parameter named last_name.
The function should print the last_name, followed by a comma, a space, first_name another space, and finally last_name again.
For example, introduction("James", "Bond"); should print the following: Bond, James Bond
*/

#include <iostream>

void introduction(std::string first_name, std::string last_name) {
    std::cout << last_name << ", " << first_name << " " << last_name << "\n";
}

int main(){
    introduction("James", "Bond");
    return 0;
}
