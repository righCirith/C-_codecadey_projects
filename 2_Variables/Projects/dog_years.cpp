/*
Created on Monday Oct 15 18:41:58 2024
Author: @righCirith
Module 2: Variables
Project 1: Dog Years
*/

// Instructions: Write a C++ program called dog_years.cpp to calculate the age, in human years, of any dog older than 2.

// This program calculates a dog's age in human years.

/* Note: This version of the program is for dogs older than 2 years old. Dogs older than 2 years have their age calculated differently: The first two years of a dog’s life count as 21 human years, and each following year counts as 4 human years. */


#include <iostream>

int main() {
  // get the dog's age
  int dog_age;
  std::cout << "Enter the dog's age: ";
  std::cin >> dog_age; 

  // dog years --> human years
  int early_years = 21; 
  int later_years = (dog_age - 2) * 4;
  int human_years = early_years + later_years;

  std::cout << "My name is Chop" << "!" << " Ruff ruff, I am " << human_years << " years old in human years.";

  return 0;
}
