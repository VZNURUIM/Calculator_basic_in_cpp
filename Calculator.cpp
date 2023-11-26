#include <iostream>

using namespace std;

int main() {
	//variable responsible for receiving the value of which operation
	int response;

	double n1;
	double n2;

	cout << "[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\nResponse: ";
	cin >> response;

	if (response == 1) {
		cout << "\nWrite one number: ";
		cin >> n1;

		cout << "\nWrite one number: ";
		cin >> n2;
		
		//Addition Formula (a + b)
		double addition_formula = n1 + n2;

		//Formula Response ( n1 + n2 )
		cout << "\n" << n1 << " + " << n2 << " = " << addition_formula;
	}
	else if (response == 2) {
		cout << "\nWrite one number: ";
		cin >> n1;

		cout << "\nWrite one number: ";
		cin >> n2;

		// Subtraction Formula ( a - b )
		double subtraction_formula = n1 - n2;
		
		cout << "\n" << n1 << " - " << n2 << " = " << subtraction_formula;
	}
	else if (response == 3) {
		cout << "\nWrite one number: ";
		cin >> n1;

		cout << "\nWrite one number: ";
		cin >> n2;

		//Multiplication Formula ( a * b )
		double multiplication_formula = n1 * n2;

		cout << "\n" << n1 << " x " << n2 << " = " << multiplication_formula;
	}
	else if (response == 4) {
		cout << "\nWrite one number: ";
		cin >> n1;

		cout << "\nWrite one number: ";
		cin >> n2;

		//Division Formula ( a / b )
		double division_formula = n1 / n2;

		cout << "\n" << n1 << " : " << n2 << " = " << division_formula;
	}
	cout << "\n";
	system("PAUSE");

	return 0;
}