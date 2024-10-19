/*
Created on Thursday Oct 17 23:39:52 2024
Author: @righCirith
Module 3: Conditionals && Logic
Project 1: Magic Eight Ball
*/

// Instructions: Write a C++ magic8.cpp program that will output a random fortune each time it executes 


#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL: ";

  srand(time(NULL));
  int answer = std::rand() % 10;

  switch(answer) {
    case 0:
      std::cout << "It is certain";
      break;
    case 1:
      std::cout << "It is decidedly so";
      break;
    case 2:
      std::cout << "Without a doubt";
      break;
    case 3:
      std::cout << "Cannot predict now";
      break;
    case 4:
      std::cout << "You may rely on it";
      break;
    case 5:
      std::cout << "As I see it, yes";
      break;
    case 6: 
      std::cout << "Most likely";
      break;
    case 7:
      std::cout << "Outlook good";
      break;
    case 8:
      std::cout << "Yes";
      break;
    case 9:
      std::cout << "Signs point to yes";
      break;
    case 10:
      std::cout << "Don't count on it";
      break;
    case 11:
      std::cout << "Very doubtful";
      break;
    case 12:
      std::cout << "My sources say no";
      break;
    case 13:
      std::cout << "Concentrate and ask again";
    default:
      std::cout << "unknown error";
      break;
  }

  return 0;
}
