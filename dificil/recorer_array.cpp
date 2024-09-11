#include <iostream>

int main() {

	std::string estudiantes[] = { "Maria", "Juan","Ana", "Santi", "Angel", "Roberto"};

	int longitud = sizeof(estudiantes) / sizeof(std::string);

	for (int i = 0; i < longitud;i++) {
		std::cout << estudiantes[i] << "\n";
	}

	return 0;
}