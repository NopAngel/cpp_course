#include <iostream>

int main() {

	int temp;

	std::cout << "Ingrese la temperatura: ";
	std::cin >> temp;

	if (temp > 0 && temp < 30) {
		std::cout << "La temperatura es buena.";
	}
	else {
		std::cout << "La temperatura es mala";
	}


	return 0;
}
