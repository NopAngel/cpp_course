#include <iostream>

int main() {

	// Son ifs, pero de diferente sintaxis.
/*
	int calificacion = 75;

	/*
	if (calificacion >= 60) {
		std::cout << "Pasas!";
	}
	else {
		std::cout << "Fallaste!";
	}
	
	

	calificacion >= 60 ? std::cout << "Pasas!" : std::cout << "Fallaste!";;
	
*/

	int numero;


	std::cout << "Ingrese un numero par o impar: ";

	std::cin >> numero;



	numero % 2 ? std::cout << "impar" : std::cout << "par";

	return 0;
}