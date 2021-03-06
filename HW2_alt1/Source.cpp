//Source.cpp Hiromi Kageyama Sept. 21, 2020
//write a c++ program that takes the input from the user and outputs the sum

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::vector;

//this function takes the number of pennies from the user
void enterPenny(vector<string>& pennies) {
	for (int p = 0; p < 1; p++) {
		string penny;
		cout << "How many pennies do you have: ";
		getline(cin, penny);
		pennies.push_back(penny);
		cout << endl;
	}
	return;
}

//this function takes the number of nickels from the user
void enterNickel(vector<string>& nickels) {
	for (int n = 0; n < 1; n++) {
		string nickel;
		cout << "How many nickels do you have: ";
		getline(cin, nickel);
		nickels.push_back(nickel);
		cout << endl;
	}
	return;
}

//this function takes the number of dimes from the user
void enterDime(vector<string>& dimes) {
	for (int d = 0; d < 1; d++) {
		string dime;
		cout << "How many dimes do you have: ";
		getline(cin, dime);
		dimes.push_back(dime);
		cout << endl;
	}
	return;
}

//this function takes the number of quarters from the user
void enterQuarter(vector<string>& quarters) {
	for (int q = 0; q < 1; q++) {
		string quarter;
		cout << "How many quarters do you have: ";
		getline(cin, quarter);
		quarters.push_back(quarter);
		cout << endl;
	}
	return;
}

//this function takes the number of dollars from the user
void enterDollar(vector<string>& dollars) {
	for (int dol = 0; dol < 1; dol++) {
		string dollar;
		cout << "How many dollar coins do you have: ";
		getline(cin, dollar);
		dollars.push_back(dollar);
		cout << endl;
	}
	return;
}

bool pn(const string& penny, const vector<string>& pennies) {
	for (int p = 0; p < 1; p++) {
		cout << endl;
		if (pennies[p] == penny) {
			return true;
		}
		else {
			return false;
		}
	}
	return 0;
}

int main() {
	//takes the number of coins from the user
	vector<string> pennies;
	vector<string> nickels;
	vector<string> dimes;
	vector<string> quarters;
	vector< string > dollars;
	enterPenny(pennies);
	enterNickel(nickels);
	enterDime(dimes);
	enterQuarter(quarters);
	enterDollar(dollars);
	
	string penny;
	for (int p = 0; p < 1; p++) {
		cout << endl;
		if (pn(penny, pennies)) {
			cout << "You have 1 penny.";
		}
		else {
			cout << "You have " << pennies[p] << " pennies.";
		}
		cout << endl;
	}

	for (int n = 0; n < 1; n++) {
		cout << endl;
		cout << "You have " << nickels[n] << " nickels." << endl;
	}

	for (int d = 0; d < 1; d++) {
		cout << endl;
		cout << "You have " << dimes[d] << " dimes." << endl;
	}

	for (int q = 0; q < 1; q++) {
		cout << endl;
		cout << "You have " << quarters[q] << " quarters." << endl;
	}

	for (int dol = 0; dol < 1; dol++) {
		cout << endl;
		cout << "You have " << dollars[dol] << " dollar coins." << endl;
	}

	return 0;
}