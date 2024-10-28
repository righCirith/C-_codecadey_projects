/*
Created on Monday Oct 28 11:28:29 2024
Author: @righCirith
Module 7: Classes & Objects
Project: The Object Of Your Affection
*/

#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  std::cout << sam.view_profile() << '\n';

}
