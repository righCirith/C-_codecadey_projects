/*
Created on Monday Oct 15 20:54:54 2024
Author: @righCirith
Module 2: Variables
Project 2: Quadratic Formula
*/

// Instructions: Write a C++ quadratic.cpp that solves the quadratic equation for the x‘s.

//note: The current code does not check if the discriminant is negative, which could result in attempting to calculate the square root of a negative number, leading to undefined behavior or complex results. Basically the code doesn't handle the case where the roots are complex.

#include <iostream>
#include <cmath>
int main() {
    double a, b, c;
   
    // get the value of a
    std::cout << "Enter a: ";
    std::cin >> a;

    // get the value of b
    std::cout << "Enter b: ";
    std::cin >> b;
  
    // get the value of c
    std::cout << "Enter c: ";
    std::cin >> c;

    // calculate the roots
    double root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    double root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    // output the results
    std::cout << "The values of x are: " << root1 << " and " << root2;
    return 0;
}
