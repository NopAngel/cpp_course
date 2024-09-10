#include <iostream>
#include <ctime>



void FelizCumple(std::string nombre, int edad) {
	std::cout << "Que lo cumplas feliz\n";
	std::cout << "Que lo cumplas feliz " << nombre << '\n';
	std::cout << "Que lo cumplas a ti\n";
	std::cout << "Que lo cumplas feliz\n";


}

int main() {

	std::string nombre = "Juan";
	int edad = 24;

	FelizCumple(nombre, edad);

	return 0;
}