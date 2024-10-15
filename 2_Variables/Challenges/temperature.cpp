/*
Created on Saturday Oct 15 00:16:51 2024
Author: @righCirith
Module 2: Variables
Challenge: Temperature
*/

// Instructions: The mad scientist Kelvin has mastered predicting the weather in his mountain-side meteorology lab. Recently, Kelvin began publishing his weather forecasts on his website, however, there’s a problem: All of his forecasts describe the temperature in Fahrenheit degrees. Let’s convert a temperature from Fahrenheit (F) to Celsius (C).



#include <iostream>

int main() {

  double tempf;
  double tempc;
  
  std::cout << "Enter the temperature in Fahrenheit: "; 
  std::cin >> tempf; // Ask the user the temperature and assign it to the tempf variable
  
  tempc = (tempf - 32) / 1.8; //convert F to C
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
  return 0;
}
