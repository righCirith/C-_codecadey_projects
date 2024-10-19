/*
Created on Friday Oct 18 19:39:05 2024
Author: @righCirith
Module 3: Conditionals && Logic
Project 2: Harry Potter Sorting Hat Quiz 
*/

// Instructions: Write a sortinghat.cpp program that asks the user some questions and places them into one of the four Houses based on their answers!

#include <iostream>

int main() {
	int gryffindor = 0;
  	int hufflepuff = 0;
  	int ravenclaw = 0;
  	int slytherin = 0;

  	int answer1;
  	int answer2;
  	int answer3;
  	int answer4;

  	std::cout << "The Sorting Hat Quiz!\n";

  	// First question
  	std::cout << "Q1) When I'm dead, I want people to remember me as:\n" <<
  	"1) The Good\n" << "2) The Great\n" << "3) The Wise\n" << "4) The Bold\n" << "Your answer: ";
	std::cin >> answer1;

  	if(answer1 == 1) {
    		hufflepuff = hufflepuff + 1;
  	}
  	else if (answer1 == 2) {
    		slytherin = slytherin + 1;
  	}
  	else if (answer1 == 3) {
    		ravenclaw = ravenclaw + 1;
  	}
  	else if (answer1 == 4) {
    		gryffindor = gryffindor + 1;
  	}
  	else {
    		std::cout << "Invalid input\n";
		return 1;
  	}


  	// Question 2
  	std::cout << "Q2) Dawn or Dusk?\n" << "1) Dawn\n" << "2) Dusk\n" << "Your answer: ";
  	std::cin >> answer2;
	
	if (answer2 == 1) {
		gryffindor = gryffindor + 1;
		ravenclaw = ravenclaw + 1;
	}
	else if (answer2 == 2) {
		hufflepuff = hufflepuff + 1;
		slytherin = slytherin + 1;

	} else {
		std::cout << "Invalid output\n";
		return 1;
	}
  

	// Question 3
	std::cout << "Q3) Which kind of instrument most pleases your ear?\n" << "1) The violin\n" << "2) The trumpet\n" << "3) The piano\n" << "4) The drum\n" << "Your answer: ";
	std::cin >> answer3;

	if (answer3 == 1) {
		slytherin = slytherin + 1;
	}
	else if (answer3 == 2) {
		hufflepuff = hufflepuff + 1;
	}
	else if (answer3 == 3) {
		ravenclaw = ravenclaw + 1;
	}
	else if (answer3 == 4) {
		gryffindor = gryffindor + 1;
	}
	else {
		std::cout << "Invalid output\n";
		return 1;
	}


	//Question 4
	std::cout << "Q4) Which road tempts you most?\n" << "1) The wide, sunny grassy lane\n" << "2) The narrow, dark, lantern-lit alley\n" << "3) The twisting, leaf-strew path through woods\n" << "4) The cobbled street lined (ancient buildings)\n" << "Your answer: ";
	std::cin >> answer4;

	if (answer4 == 1) {
		hufflepuff = hufflepuff +1;
	}
	else if (answer4 == 2) {
		slytherin = slytherin + 1;
	}
	else if (answer4 == 3) {
		gryffindor = gryffindor + 1;
	}
	else if (answer4 == 4) {
		ravenclaw = ravenclaw + 1;
	}
	else {
		std::cout << "Invalid output\n";
		return 1;
	}
	
	
	int max = 0;
	std::string house;

	if (gryffindor > max) {
		max = gryffindor;
		house = "Gryffindor";
	}
	
	if (hufflepuff > max) {
		max = hufflepuff;
		house = "Hufflepuff";
	}

	if (ravenclaw > max) {
		max = ravenclaw;
		house = "Ravenclaw";
	}

	if (slytherin > max) {
		max = slytherin;
		house = "Slytherin";
	}

	std::cout << "Your house is: "<< house << "!\n"; 
	return 0;
}
