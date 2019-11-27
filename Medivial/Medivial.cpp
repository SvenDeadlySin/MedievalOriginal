// Medivial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>

int main() {

	char characterTraits[5];

	// declaring variables:e;
	char personGender, personClass, personRace, result, personName, personGender1[16];
	int personAge; 
	
	// adding in strings

	
	// getting gender information from the user 
	std::cout << "What gender did you inherit at birth, Masked Mage? (M/F): ";
	std::cin >> personGender;
	if (personGender == 'M') {
		std::cout << "A Male? Interesting..." << std::endl;
	}
	else if (personGender == 'F') {
		std::cout << "A Female? Interesting... " << std::endl;
	}
	
	// letting program delay input/ further text for effect *I could incorp this into the actial code to make the three dots wave effect
	Sleep(1800);

	// getting name n age 
	std::cout << "What is your name, " << personGender1 << "?: ";
	std::cin >> personName;
	Sleep(1400);
	std::cout << "Yes, " << personName << ", and what is the age of our Warrior?: ";
	std::cin >> personAge;

	// getting the users race 
	std::cout << "Of what Race does thy divine from, " << personName << ": ";
	std::cin >> personRace;
	Sleep(1200);
	std::cout << "\n, " << personRace << "The first of your race, I... have seen in a while... ";





	std::cout << "How are you";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
