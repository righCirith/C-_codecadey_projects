/*
Created on Monday Oct 21 11:32:18 2024
Author: @righCirith
Module 5: Vectors
Project: Whale Talk
*/

/* Instructions: Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".
   There are a few simple rules for translating text to whale language:
   1. There are no consonants. Only vowels excluding the letter y.
   2. The u‘s and e‘s are extra long, so we must double them.
*/

#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string input;
  std::cout << "Type something and it will be translated to whale language: ";
  std::cin >> input;

  std::vector<char> vowels = {'a', 'e', 'i','o', 'u'};

  std::vector<char> result = {};
  
  for (int i = 0; i < input.size(); i++) {
    if (input[i] == 'e' || input[i] == 'u') {
      result.push_back(input[i]);
    }
    for(int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
    }
  }

  for (int k = 0; k < result.size(); k++) {
    std::cout << result[k];
  }
  std::cout << "\n";

  return 0;
}

