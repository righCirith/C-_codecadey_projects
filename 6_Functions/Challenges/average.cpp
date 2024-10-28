/*
Created on Monday Oct 21 18:16:38 2024
Author: @righCirith
Module 6: Functions
Challenge 2: Average
*/

/*Instructions: Write a function average() that takes:
    - A double parameter named num1.
    - A double parameter named num2.
The function should return a double that is the average of the arguments passed in.

*/

#include <iostream>

// Define average() here:
double average(double num1, double num2) {
  return (num1 + num2)/2;
}

int main() {
  
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";
  return 0;
  
}
