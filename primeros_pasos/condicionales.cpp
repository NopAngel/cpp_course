#include <iostream>;

int main() {

	int edad;
	std::cout << "Ingresa tú edad:  ";

	std::cin >> edad;

	if (edad >= 18) {
		std::cout << "Bienvenido al sitio."
	} 
	else {
		std::cout << "Lo siento, usted no puede pasar por la edad."
	}

	return 0;
}