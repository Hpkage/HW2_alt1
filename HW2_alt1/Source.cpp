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

//this function takes the input from the user
void enterCoins(vector<string>& coins) {
	for (int i = 0; i < 1; i++) {
		string amount;
		cout << "How many pennies do you have: ";
		getline(cin, amount);
		coins.push_back(amount);
		cout << endl;
		cout << "How many nickels do you have: ";
		getline(cin, amount);
		coins.push_back(amount);
		cout << endl;
		cout << "How many dimes do you have: ";
		getline(cin, amount);
		coins.push_back(amount);
		cout << endl;
		cout << "How many quarters do you have: ";
		getline(cin, amount);
		coins.push_back(amount);
		cout << endl;
		cout << "How many dollar coins do you have: ";
		getline(cin, amount);
		coins.push_back(amount);
		cout << endl;
	}
	return;
}

int main() {
	vector<string> coins;
	enterCoins(coins);

	return 0;
}