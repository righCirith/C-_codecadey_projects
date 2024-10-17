/*
Created on Wednesday Oct 16 21:47:16 2024
Author: @righCirith
Module 2: Variables
Project 3: Piggy Bank
*/

// Instructions: Write a C++ program called currency.cpp that prompts the user for the amount of each foreign currency. Your program should then convert the amount entered by the user and display the total amount of USD


#include <iostream>

int main() {
    double pesos; // 1 peso = 0.00023 usd
    double reais; // 1 real = 0.18 usd
    double soles; // 1 sol = 0.26 usd
  
    // prompt user for input
    std::cout << "Enter number of Colombian\nPesos:";
    std::cin >> pesos;

    std::cout << "Enter number of Colombian\nReais:";
    std::cin >> reais;

    std::cout << "Enter number of Colombian\nSoles:";
    std::cin >> soles;

    // calculate in US dollars
    double dollars = 0.00023 * pesos + 0.18 * reais + 0.26 * soles;

    // output result
    std::cout << "US Dollars = $" << dollars << "\n";
  
    return 0;
}
