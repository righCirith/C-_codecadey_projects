/*
Created on Monday Oct 21 19:49:24 2024
Author: @righCirith
Module 6: Functions
Challenge 6: Palindrome
*/

/*Instructions: Define a function is_palindrome() that takes:
    - An std::string parameter text.
The function should return:
    - true if text is a palindrome.
    - false if text is not a palindrome.
(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.)
We will not test for edge cases such as capitalization or spaces.
*/


#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
    std::string x = text;
    std::string y;

    // reverse text and assign it to 'y'
    for(int i = text.size() - 1; i >= 0; i--) {
        y += text[i];
    }

    // compare both variables
    if(x == y) {
        return true;
    } else {
        return false;
    }
 
}

int main() {
  
    std::cout << is_palindrome("madam") << "\n"; // expected output: 1
    std::cout << is_palindrome("hola") << "\n"; // expected output: 0
    std::cout << is_palindrome("ada") << "\n"; // expected output: 1
    std::cout << is_palindrome("lovelace") << "\n"; // expected output: 0
    return 0;
  
}
