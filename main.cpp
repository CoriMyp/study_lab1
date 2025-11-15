#include <iostream>
#include <format>

#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;


// Calculates the logarithm of a given number for a specified base.
double log_base(double number, double base) {
	return log(number) / log(base);
}

// Checks if the input value x is within the function's domain.
double check_x_value(double x) {
	return (x > -4) && (x != -7) && (x != 10);
}

// Calculates the value of the math expression for variant 64.
double f(double x) {
	return (
		cos(4.0 / 64.0)
		+
		( (23 * M_PI) / (62 * M_E) )
		*
		( 11 / ((x + 7) * (x - 10)) )
		-
		(15 * sin(x + 6))
		-
		log_base(x + 4, 6)
	);
}

// Prints the input data and the calculation result in the required format.
void print_result(double x, double result, bool checked_x) {
	cout << format("for x = {:.7f}", x) << endl;

	if (checked_x) {
		cout << format("result = {:.8f}", result) << endl;
	} else {
		cout << "result = undefined" << endl;
	}
}


int main() {
	cout << "The author of this program is Miroslav Rabcheniuk from K-14." << endl;
	cout << "This code calculates math formula specified in variant 64." << endl;

	double x;
	cout << "Enter float value of X ( >-4, !=-7, !=10 ): ";
	cin >> x;

	if (cin.fail()) {
		cout << "wrong input" << endl;
		return 1;
	}

	cout << "\n***** do calculations ... ";
	bool checked_x = check_x_value(x);
	double result;

	if (checked_x) {
		result = f(x);
	}

	cout << "done" << endl;
	print_result(x, result, checked_x);


	cout << endl;
	return 0;
}
