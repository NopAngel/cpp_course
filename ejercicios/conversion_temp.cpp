#include <iostream>

int main() {

	double temp;
	char op;

	std::cout << "***** CONVERSION DE TEMPERATURA *****\n";

	std::cout << "F = Fahrenheit\n";
	std::cout << "C = Celsius\n";

	std::cout << "A que unidad te gustaria convertir?   ";

	std::cin >> op;

	switch (op) {
	case 'f':
		std::cout << "Ingrese la temperatura de Celsius";
		std::cin >> temp;
		temp = 1.8 * temp + 32;

		std::cout << "La temperatura es " << temp << " grados Fahrenheit";
		break;

	case 'c':
		std::cout << "Ingrese la temperatura de Fahrenheit";
		std::cin >> temp;
		temp = (temp - 32) / 1.8;

		std::cout << "La temperatura es " << temp << " grados Celsius";
		break;

	default:
		std::cout << "Por favor, ingrese un dato valido. (C o F)";
	}


	std::cout << "********************************";

	return 0;
}