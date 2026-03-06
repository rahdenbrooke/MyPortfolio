/****************************************
Pizza Project for C++ Programming I
Author: Brooke Rahden
Start Date: 03-23-2025
End Date: 04-19-2025
Edited: 07-27-2025
*****************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Display Stars across the screen
void displayStars() {
	int numStars = 50;
	int i = 0;

	// loop for stars
	for (i = 0; i < numStars; ++i) {
		cout << "*";
	}
	cout << endl << endl;
}

// Function for choosing the crust type
string chooseCrustType() {

	char crustChar;

	// the while loop makes sure the user enters a char
	while(true) {

		cout << "Please select one crust option: " << endl << endl << endl;
		cout << "   a. regular crust           b. gluten-free crust" << endl << endl << endl;
		cout << "Enter choice: ";
		cin >> crustChar;

		// switch returns the crust type
		switch(crustChar) {
		case 'a':
		case 'A':
			return "regular crust";
		case 'b':
		case 'B':
			return "gluten-free crust";
		default:
			cout << "Invalid input. Please enter a or b: " << endl;
		}
	}
}

string chooseSauce() {

	// stars
	displayStars();

	char sauceChar;

	// the while loop makes sure the user enters a char
	while (true) {

		cout << "Please choose one sauce option:" << endl << endl << endl;
		cout << "   a. red sauce             b. no red sauce" << endl << endl;
		cout << "Enter choice: ";
		cin >> sauceChar;

		// switch returns if the user wants sauce or not
		switch (sauceChar) {
		case 'a':
		case 'A':
			return "red sauce";
		case 'b':
		case 'B':
			return "no red sauce";
		default:
			cout << "Invalid input. Please enter a or b: " << endl;
		}
	}
}

// Function for choosing sauce amount
string chooseSauceAmount() {

	char sauceAmountChar;

	// the while loop makes sure the user enters a char
	while (true) {

		cout << "Please choose a sauce amount:" << endl << endl << endl;
		cout << "   a. 1/4 cup             b. 1/2 cup" << endl << endl;
		cout << "Enter choice: ";
		cin >> sauceAmountChar;

		// switch returns if the user wants sauce or not
		switch (sauceAmountChar) {
		case 'a':
		case 'A':
			return "1/4 cup";
		case 'b':
		case 'B':
			return "1/2 cup";
		default:
			cout << "Invalid input. Please enter a or b: " << endl;
		}
	}
}

// Function that includes the options 1/8 and 1/4 cup
string amountOptionOne(string ingredient) {
	char optionOneChar;

	// the while loop makes sure the user enters a char
	while (true) {

		cout << "Please choose a " << ingredient << " amount:" << endl << endl << endl;
		cout << "   a. 1/8 cup             b. 1/4 cup" << endl << endl;
		cout << "Enter choice: ";
		cin >> optionOneChar;

		// switch returns if the amount the user wants
		switch (optionOneChar) {
		case 'a':
		case 'A':
			return "1/8 cup";
		case 'b':
		case 'B':
			return "1/4 cup";
		default:
			cout << "Invalid input. Please enter a or b: " << endl;
		}
	}
}

// Function for 1/4 and 1/2 cup
string amountOptionTwo(string ingredient) {
	char optionTwoChar;

	// the while loop makes sure the user enters a char
	while (true) {

		cout << "Please choose a " << ingredient << " amount:" << endl << endl << endl;
		cout << "   a. 1/4 cup             b. 1/2 cup" << endl << endl;
		cout << "Enter choice: ";
		cin >> optionTwoChar;

		// switch returns if the amount the user wants
		switch (optionTwoChar) {
		case 'a':
		case 'A':
			return "1/4 cup";
		case 'b':
		case 'B':
			return "1/2 cup";
		default:
			cout << "Invalid input. Please enter a or b: " << endl;
		}
	}

}

// Function for multiple pieces
string amountOptionThree(string ingredient, string amountOne, string amountTwo, string amountThree,
                         string amountFour) {
	char optionThreeChar;

	// the while loop makes sure the user enters a char
	while (true) {

		cout << "Please choose a " << ingredient << " amount:" << endl << endl << endl;
		cout << "   a. " << amountOne << "      b. " << amountTwo << endl;
		cout << "   c. " << amountThree << "      d. " << amountFour << endl << endl;
		cout << "Enter choice: ";
		cin >> optionThreeChar;

		// switch returns if the amount the user wants
		switch (optionThreeChar) {
		case 'a':
		case 'A':
			return amountOne;
		case 'b':
		case 'B':
			return amountTwo;
		case 'c':
		case 'C':
			return amountThree;
		case 'd':
		case 'D':
			return amountFour;
		default:
			cout << "Invalid input. Please enter a, b, c, or d: " << endl;
		}
	}
}

// Function for generous sprinkles
string amountOptionFour(string ingredient) {
	char optionFourChar;

	// the while loop makes sure the user enters a char
	while (true) {

		cout << "Please choose a " << ingredient << " amount:" << endl << endl << endl;
		cout << "   a. 1 generous sprinkle             b. 2 generous sprinkles" << endl << endl;
		cout << "Enter choice: ";
		cin >> optionFourChar;

		// switch returns if the amount the user wants
		switch (optionFourChar) {
		case 'a':
		case 'A':
			return "1 generous sprinkle";
		case 'b':
		case 'B':
			return "2 generous sprinkles";
		default:
			cout << "Invalid input. Please enter a or b: " << endl;
		}
	}
}

// Main Function
int main() {
	// counter to limit the # if items on the pizza (no more than 8)
	int count = 0;
	// display stars and intro
	displayStars();
	cout << "Group 7 Pizza Project" << endl;

// CRUST SECTION
	// crust type function
	string crustType = chooseCrustType();

	// restating the selection of crust
	cout << "   * You chose: " << crustType << " = 1 *" << endl;
	// +1 for crust
	++count;

// SAUCE SECTION
	// choosing if they want sauce
	string sauceSelection = chooseSauce();
	string sauceAmount;

	// asking sauce amount if the user chose red sauce
	if (sauceSelection == "red sauce") {
		cout << endl;
		// function for choosing sauce amount
		sauceAmount = chooseSauceAmount();
		// restating sauce amount
		cout << "   * You chose: red sauce = " << sauceAmount << " *" << endl;
		++count;
	}
	else {
		cout << "   * You chose: " << sauceSelection << " *" << endl;
	}

	// stars
	displayStars();

// TOPPINGS SECTION
	// listing all the toppings in a vector
	vector<string> ingredients = {"cheese", "diced onion", "diced green pepper",
	                              "pepperoni", "sliced mushroom", "diced jalapeno", "sardines", "pineapple",
	                              "tofu", "ham", "dry red pepper", "dried basil"
	                             };
	// call to function and assign it to chosen vector
	/* this vector stores the values that the user has chosen, while the vector for the ingredients
	loops below it */
	vector<string> chosen;

	bool continueChoosing = true;

	string cheeseAmount;
	string dicedOnionAmount;
	string dicedGreenPepperAmount;
	string pepperoniAmount;
	string slicedMushroomAmount;
	string dicedJalapenoAmount;
	string sardinesAmount;
	string pineappleAmount;
	string tofuAmount;
	string hamAmount;
	string dryRedPepperAmount;
	string driedBasilAmount;

	while ((count < 8) && (continueChoosing)) {
		cout << endl;
		cout << "Choose an ingredient (" << (8 - count) << " left):" << endl << endl;

		for (int i = 0; i < ingredients.size(); ++i) {
			char label = 'a' + i;
			cout << "\t" << label << ". " << ingredients[i] << endl;
		}

		char ingredientLetterChoice;
		cout << endl;
		cout << "Enter choice: ";
		cin >> ingredientLetterChoice;

		int index = ingredientLetterChoice - 'a';

		if (index < 0 || index >= ingredients.size()) {
			cout << "Invalid choice. Please select one of the characters shown.";
			continue;
		}

		string ingredient = ingredients[index];
		ingredients.erase(ingredients.begin() + index);

		if (ingredient == "cheese") {
			++count;
			// assigns cheeseAmount to the function (so the function can return the amount)
			cheeseAmount = amountOptionTwo(ingredient);
			// restating their amount
			cout << "   * You chose: cheese = " << cheeseAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "diced onion") {
			++count;
			dicedOnionAmount = amountOptionOne(ingredient);
			cout << "   * You chose: diced onion = " << dicedOnionAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "diced green pepper") {
			++count;
			dicedGreenPepperAmount = amountOptionOne(ingredient);
			cout << "   * You chose: diced green pepper = " << dicedGreenPepperAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "pepperoni") {
			++count;
			string amountOne = "2 pieces";      // pepperoni amounts for function parameters
			string amountTwo = "4 pieces";
			string amountThree = "6 pieces";
			string amountFour = "8 pieces";
			pepperoniAmount = amountOptionThree(ingredient, amountOne, amountTwo,
			                                    amountThree, amountFour);
			cout << "   * You chose: pepperoni = " << pepperoniAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "sliced mushroom") {
			++count;
			slicedMushroomAmount = amountOptionOne(ingredient);
			cout << "   * You chose: sliced mushroom = " << slicedMushroomAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "diced jalapeno") {
			++count;
			dicedJalapenoAmount = amountOptionOne(ingredient);
			cout << "   * You chose: diced jalapeno = " << dicedJalapenoAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "sardines") {
			++count;
			string amountOne = "1";      // sardines amounts for function parameters
			string amountTwo = "2";
			string amountThree = "3";
			string amountFour = "4";
			sardinesAmount = amountOptionThree(ingredient, amountOne, amountTwo,
			                                   amountThree, amountFour);
			cout << "   * You chose: sardines = " << sardinesAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "pineapple") {
			++count;
			string amountOne = "2 pieces";      // pineapple amounts for function parameters
			string amountTwo = "4 pieces";
			string amountThree = "6 pieces";
			string amountFour = "8 pieces";
			pineappleAmount = amountOptionThree(ingredient, amountOne, amountTwo,
			                                    amountThree, amountFour);
			cout << "   * You chose: pineapple = " << pineappleAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "tofu") {
			++count;
			tofuAmount = amountOptionTwo(ingredient);
			cout << "   * You chose: tofu = " << tofuAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "ham") {
			++count;
			string amountOne = "4 pieces";      // ham amounts for function parameters
			string amountTwo = "8 pieces";
			string amountThree = "12 pieces";
			string amountFour = "16 pieces";
			hamAmount = amountOptionThree(ingredient, amountOne, amountTwo,
			                              amountThree, amountFour);
			cout << "   * You chose: ham = " << hamAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "dry red pepper") {
			++count;
			dryRedPepperAmount = amountOptionFour(ingredient);
			cout << "   * You chose: dry red pepper = " << dryRedPepperAmount << " *" << endl;
			displayStars();
		}

		if (ingredient == "dried basil") {
			++count;
			driedBasilAmount = amountOptionFour(ingredient);
			cout << "   * You chose: dried basil amount = " << driedBasilAmount << " *" << endl;
			displayStars();
		}

		// ask user if they would like to continue choosing
		char continueChoice;

		if (count > 0) {
			cout << "Would you like to continue choosing? (y/n)" << endl << endl;
			cout << "Enter choice: ";
			cin >> continueChoice;

			if ((continueChoice == 'Y') || (continueChoice == 'y')) {
				displayStars();
				continue;
			}
			else if ((continueChoice == 'N') || (continueChoice == 'n')) {
				continueChoosing = false;
				displayStars();
				break;
			}
			else {
				cout << "Please type either y or n: ";
				cin >> continueChoice;
				displayStars();
				continue;
			}
		}
	}

// DISPLAY FINAL RECIPE
	cout << endl;
	if (crustType == "regular crust") {         // crust
		cout << "regular crust = 1" << endl;
	} else {
		cout << "gluten-free crust = 1" << endl;
	}

	if (sauceSelection == "red sauce") {        // sauce
		cout << "red sauce = " << sauceAmount << endl;
	}

	if (!cheeseAmount.empty()) {                         // cheese
		cout << "cheese = " << cheeseAmount << endl;
	}

	if (!dicedOnionAmount.empty()) {                         // diced onion
		cout << "diced onion = " << dicedOnionAmount << endl;
	}

	if (!dicedGreenPepperAmount.empty()) {                         // diced green pepper
		cout << "diced green pepper = " << dicedGreenPepperAmount << endl;
	}

	if (!pepperoniAmount.empty()) {                         // pepperoni
		cout << "pepperoni = " << pepperoniAmount << endl;
	}

	if (!slicedMushroomAmount.empty()) {                         // sliced mushrooms
		cout << "sliced mushroom = " << slicedMushroomAmount << endl;
	}

	if (!dicedJalapenoAmount.empty()) {                         // dried jalapenos
		cout << "diced jalapeno = " << dicedJalapenoAmount << endl;
	}

	if (!sardinesAmount.empty()) {                         // sardines
		cout << "sardines = " << sardinesAmount << endl;
	}

	if (!pineappleAmount.empty()) {                         // pineapple
		cout << "pineapple = " << pineappleAmount << endl;
	}

	if (!tofuAmount.empty()) {                         // tofu
		cout << "tofu = " << tofuAmount << endl;
	}

	if (!dryRedPepperAmount.empty()) {                         // dry red pepper
		cout << "dry red pepper = " << dryRedPepperAmount << endl;
	}

	if (!driedBasilAmount.empty()) {                         // dried basil
		cout << "dried basil = " << driedBasilAmount << endl;
	}

	cout << endl;
	displayStars();

// INSTRUCTIONS
	cout << endl;
	cout << "\t" << "Instructions for cooking your pizza: " << endl;
	cout << "\t" << "Roll and spread your choice of dough. If you chose sauce," << endl;
	cout << "\t" << "evenly spread your sauce on the dough. Evenly sprinkle/add" << endl;
	cout << "\t" << "the toppings of your choice. Cook your pizza for 10-15" << endl;
	cout << "\t" << "minutes, wait for it to cool, and ENJOY!" << endl << endl;

	cout << "\t" << "Thank you for testing our program!" << endl;
	displayStars();

	return 0;

}
