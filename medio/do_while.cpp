#include <iostream>

int main() {

	// el do-while primero ejecuta un pedasito de codigo, y despues hace el while

	int numero;

	std::cout << "Ingresa un numero positivo: ";
	std::cin >> numero;

	while (numero < 0) {
		std::cout << "Ingresa un numero positivo: ";
		std::cin >> numero;
	}


	std::cout << "El numero es: " << numero;

	return 0;
}