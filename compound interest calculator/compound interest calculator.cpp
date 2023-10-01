// A simple C++ compound interest calculator with user input

#include <iostream>
#include <cmath>
using namespace std;

// function which will be used to calculate the interest
float interest_formula(float p, float r, float n, float t) { // p = principal amount, r = interest rate, n = number of times interest is applied per year, t = time passed in year(s)

	float total;
	total = p * pow((1 + (r / (n * 100))), n * t); // compound interest formula
	return total;
}

// main function
int main() {

	// declares "play_again" variable
	string run_again = "y";

	while (run_again == "y" || run_again == "Y") {

		// declares variables related to interest_formula
		float p = 0, r = 0, n = 0, t = 0, total_amount = 0;

		// asks for user's inputs with validity checks
		cout << "Please enter the principal amount: " << endl;
		cin >> p;
		while (!cin) { // triggers if input is not a number and repeats until a valid entry is given
			cin.clear();
			cin.ignore();
			cout << "Error! Please enter a valid amount: " << endl;
			cin >> p;
		}

		cout << "Please enter the interest rate: " << endl;
		cin >> r;
		while (!cin) {
			cin.clear();
			cin.ignore();
			cout << "Error! Please enter a valid interest rate: " << endl;
			cin >> r;
		}

		cout << "Please enter the number of times interest is applied annualy: " << endl;
		cin >> n;
		while (!cin) {
			cin.clear();
			cin.ignore();
			cout << "Error! Please enter a valid number: " << endl;
			cin >> n;
		}
		
		cout << "Please enter the number of year(s): " << endl;
		cin >> t;
		while (!cin) {
			cin.clear();
			cin.ignore();
			cout << "Error! Please enter a valid number of year(s): " << endl;
			cin >> t;
		}

		// displays final output to user
		total_amount = interest_formula(p, r, n, t);
		cout << endl << "Interest earned was: " << total_amount - p << endl;
		cout << "The total amount is: " << total_amount << endl;
		

		// asks if user wants to repeat the program
		cout << endl << "Would you like to run the program again? (Y/N): " << endl;
		cin >> run_again;
		if (run_again != "y" || run_again == "Y") {
			cout << endl << "Goodbye!" << endl;
			break;
		}

	}

	return 0;
}