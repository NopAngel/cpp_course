#include <iostream>

int main() {


	std::string nombre;
	int edad;

	std::cout << "Cual es tu nombre?" << std::endl;
	std::cin >> nombre;

	std::cout << "Cual es tu edad?" << std::endl;

	std::cin >> edad;

	std::cout << "Hola " << nombre << "!";
	std::cout << "Tu edad es de " << edad << "!";

	return 0;
}