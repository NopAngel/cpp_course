#include <iostream>

int main() {

	std::string estudiantes[] = { "Maria", "Juan","Ana", "Santi", "Angel", "Fecchi." };

	for (std::string listaEstudiantes : estudiantes) {
		std::cout << listaEstudiantes;
	}

	return 0;
}