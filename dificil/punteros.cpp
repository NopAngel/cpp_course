#include <iostream>

int main() {

	std::string nombre = "Alex";
	int edad = 24;
	std::string* pNombre = &nombre;
	int* pEdad = &edad;

	// std::cout >> *pNombre; - mostrar contenido
	std::cout << *pNombre << "\n";
	std::cout << *pEdad << "\n";

	return 0;
}