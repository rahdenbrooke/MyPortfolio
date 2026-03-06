/*
 Welcome to C++ Quizzing Calculator!
 This program is designed to help students practice and improve their basic math skills,
 but more importantly, their programming skills!

Student Name: [Your Name]
Date: [Date]
Course: [Course Name]
Project: C++ Student Calculator
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Function that prints stars for visual display
void stars() {
	cout << endl;
	for(int i = 0; i < 50; i++) {
		cout << "*";
	}
	cout << endl << endl;
}

// Function that asks user if they want to keep going
char keepGoing(string style) {
	char value;
	cout << "Would you like to keep quizzing yourself on " << style << "(y/n)?" << endl;
	cout << "Enter choice: ";
	cin >> value;

	// If user chooses y, the program continues
	if(value == 'y' || value == 'Y') {
		return value;
	}
	// If user chooses n, the program exits
	else if(value == 'n' || value == 'N') {
		cout << "Thank you for using our program. Goodbye!" << endl;
		exit(0);
	}
	// If user enters invalid choice, the program exits
	else {
		cout << "Invalid choice. Exiting program." << endl;
		exit(0);
	}
}

// Function for Addition
void Addition() {
	// Random numbers for addition
	int num1 = rand() % 30 + 1; // Random number between 1 and 30
	int num2 = rand() % 25 + 1; // Random number between 1 and 25
	// Declare the sum
	int sum = num1 + num2;
	int sumGuess;
	string style = "addition";      // will be used later

	// Display the numbers for the user
	cout << "What is " << num1 << " + " << num2 << "? " << endl;
	cout << "Your answer: ";
	cin >> sumGuess;

	// If the user gets the answer correct
	if (sumGuess == sum) {
		cout << "Correct! Well done.";
		// Else the user gets the answer wrong
	} else {
		cout << "Incorrect. The correct answer is " << sum << ".";
	}

	stars();
	// Returns if the user would like to keep going
	keepGoing(style);
	// Recalls to restart the function if the answer is yes
	Addition();

}

// Function for Subtraction
void Subtraction() {
	int num1 = rand() % 30 + 1; // Random number between 1 and 30
	int num2 = rand() % 25 + 1; // Random number between 1 and 25

	// While loop will occur until num1 is greater than num2
	while(num1 < num2) {
		num1 = rand() % 30 + 1; // Random number between 1 and 30
	}

	// Declare variables (AFTER random number loop)
	int difference = num1 - num2;
	int diffGuess;
	string style = "subtraction";

	cout << "What is " << num1 << " - " << num2 << "? " << endl;
	cout << "Your answer: ";
	cin >> diffGuess;

	if (diffGuess == difference) {
		cout << "Correct! Well done.";
	} else {
		cout << "Incorrect. The correct answer is " << difference << ".";
	}

	stars();
	keepGoing(style);
	Subtraction();

}

// Function for Multiplication
void Multiplication() {
	int num1 = rand() % 12 + 1;
	int num2 = rand() % 12 + 1;
	int product = num1 * num2;
	int productGuess;
	string style = "multiplication";

	cout << "What is " << num1 << " * " << num2 << "? " << endl;
	cout << "Your answer: ";
	cin >> productGuess;

	if (productGuess == product) {
		cout << "Correct! Well done.";
	} else {
		cout << "Incorrect. The correct answer is " << product << ".";
	}

	stars();
	keepGoing(style);
	Multiplication();

}

void Division() {
	int num1 = rand() % 50 + 1;
	int num2 = rand() % 20 + 1;

	while (num2 == 0 || num1 % num2 != 0) {
		num1 = rand() % 50 + 1;
		num2 = rand() % 20 + 1;
	}

	// Declare variables (AFTER random number loop)
	int quotient = num1 / num2;
	int quotientGuess;
	string style = "division";

	cout << "What is " << num1 << " / " << num2 << "? " << endl;
	cout << "Your answer: ";
	cin >> quotientGuess;

	if (quotientGuess == quotient) {
		cout << "Correct! Well done.";
	} else {
		cout << "Incorrect. The correct answer is " << quotient << ".";
	}

	stars();
	keepGoing(style);
	Division();

}

// Main Function
int main() {

	// Declare variables
	stars();            // Call stars Function for visual display
	char programChar;
	bool choosingProgram = true;

	// Welcome message
	cout << "Hello, and welcome to your C++ Calcultor!" << endl << endl;
	cout << "After using this program, you will master your addition," << endl;
	cout << "subtraction, multiplication, and division skills." << endl << endl;

	cout << "First, what would you like to quiz yourself on:" << endl << endl;
	cout << "a. Addition 			b. Subtraction" << endl;
	cout << "c. Multiplication		d. Division" << endl << endl;
	cout << "Enter choice: ";
	cin >> programChar;

	// While loop ensures that the user enters a correct value, and loops if the value is incorrect
	while(choosingProgram) {
		stars();  // Call stars Function for visual display

		// If the user enters 'a' or 'A', the program will go to the Addition function
		if (programChar == 'a' || programChar == 'A') {
			cout << endl << "You have chosen to quiz yourself on addition." << endl;
			Addition();
			choosingProgram = false;
		}
		// else if the user enters 'b' or 'B', the program will go to the Subtraction function
		else if (programChar == 'b' || programChar == 'B') {
			cout << endl << "You have chosen to quiz yourself on subtraction." << endl;
			Subtraction();
			choosingProgram = false;
		}
		// else if the user enters 'c' or 'C', the program will go to the Multiplication function
		else if (programChar == 'c' || programChar == 'C') {
			cout << endl << "You have chosen to quiz yourself on multiplication." << endl;
			Multiplication();
			choosingProgram = false;
		}
		// else if the user enters 'd' or 'D', the program will go to the Division function
		else if (programChar == 'd' || programChar == 'D') {
			cout << endl << "You have chosen to quiz yourself on division." << endl;
			Division();
			choosingProgram = false;
		}
		// else if the user enters the wrong character, the program will ask for a different input
		else {
			cout << "Invalid choice. Please enter a valid option: ";
			cin >> programChar;
		}
	}

	return 0;
}


