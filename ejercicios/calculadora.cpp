#include <iostream>

int main() {

	// Variables.

	char op;
	double num1;
	double num2;
	double res;

	// simbolos.

	std::cout << "########## CALCULADORA ##########\n";


	std::cout << "Ingrese (+ - * /): ";
	std::cin >> op;




	std::cout << "Ingrese el numero 1: ";
	std::cin >> num1;



	std::cout << "Ingrese el numero 2: ";
	std::cin >> num2;


	// SWITCH AND CASE;

	switch (op) {
		case '+':
			num1 + num2;
			break;
		case '-':
			num1 - num2;
			break;
		case '*':
			num1 * num2;
			break;
		case '/':
			num1 / num2;
			break;
		default:
			std::cout << "Error! ingrese datos basicos de la suma, resta, multiplicacion y divicion!";
	}

	std::cout << "##############################";

	return 0;
}