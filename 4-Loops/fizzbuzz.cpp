/*
Created on Sunday Oct 20 16:09:46 2024
Author: @righCirith
Module 4: Loops
Project 1: Fizz Buzz
*/

/*Instructions: Write a fizzbuzz.cpp program that outputs numbers from 1 to 100. But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5 print, FizzBuzz.
*/

#include <iostream>

int main() {
  for (int i = 1; i < 101; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "FizzBuzz\n";
    }
    else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    }
    else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    }
    else {
       std::cout << i << "\n";
    }
  }

    return 0;
}
