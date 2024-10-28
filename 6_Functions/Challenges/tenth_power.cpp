/*
Created on Monday Oct 21 18:21:13 2024
Author: @righCirith
Module 6: Functions
Challenge 3: Tenth Power
*/

/*Instructions: Write a function named tenth_power() that has:
    - An int parameter named num.
The function should return num raised to the 10th power.
*/

#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  return pow(num , 10);
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  return 0;
  
}
