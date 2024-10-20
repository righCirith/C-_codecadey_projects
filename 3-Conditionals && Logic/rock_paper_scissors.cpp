/*
Created on Saturday Oct 19 20:38:21 2024
Author: @righCirith
Module 3: Conditionals && Logic
Project 3: Rock, Paper, Scissors
*/

/*Instructions: Write a rock_paper_scissors.cpp program that:
    * Prompts the user to select either Rock, Paper, Scissors.
    * Instructs the computer to randomly select either Rock, Paper, Scissors.
    * Compares the user’s choice and the computer’s choice and determine the winner.
    * Informs the user who the winner is
*/


#include <iostream>
#include <stdlib.h>

int main() {
    srand (time(NULL));

    int computer = rand() % 3 + 1;
    int user = 0;

    // Game Start and options
    std::cout << "=====================\n";
    std::cout << "rock paper scissors!\n ";
    std::cout << "=====================\n";

    std::cout << "1) rock\n";
    std::cout << "2) paper\n";
    std::cout << "3) scissors\n";

    std::cout << "shoot!\n";
    std::cout << "Your choice: ";


    // get user input
    std::cin >> user;

    // Validate user input
    if (user < 1 || user > 3) {
        std::cout << "Invalid choice! Please select 1, 2, or 3.\n";
        return 1;
    }

  
    // display user's selection
    if (user == 1) {
        std::cout << "User chose: rock\n";
    }
    else if (user == 2) {
        std::cout << "User chose: paper\n";
    }
    else {
        std::cout << "User chose: scissors\n";
    }


    // display computer's selection
    if (computer == 1) {
        std::cout << "Computer chose: rock\n";
    }
    else if (computer == 2) {
        std::cout << "Computer chose: paper\n";
    }
    else {
        std::cout << "Computer chose: scissors\n";
    }
    

    // Determine winner
    if (user == computer) {
        std::cout << "It's a tie!";
    } 
    // user chose rock
    else if (user == 1 ) {
        if (computer == 2) {
            std::cout << "Computer won!\n";
        }
        else {
            std::cout << "User won!\n";
        }
    }
    // user chose paper
    else if (user == 2) {
        if (computer == 1) {
            std::cout << "User won!\n";
        }
        else {
            std::cout << "Computer won!\n";
        }
    }
    // user scissors
    else if (user == 3) {
        if (computer == 1) {
            std::cout << "Computer won!\n";
        }
        else {
            std::cout << "User won!\n";
        }
    }

    return 0;
}
