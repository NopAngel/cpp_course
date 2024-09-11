#include <iostream>

int main() {

	std::string preguntas[] = { "1. En que epoca se creo C++?",
	"2. Quien invento C++?",
	"3. Cual es el predecesor de C++?",
	"4. Es la tierra plana?" };

	std::string opciones[][4] = { {
			"A. 1969","B. 1975","C. 1985","D. 1989"
}, {
"A. Bjarne Stroustrup", "B. Johny Doe", "C. Mark Zuckerberg", "D. Guidovan Rossum"
}, {
	"A. C","C. C+", "C. C--", "D. B++"
}, {
	"A. No.", "B. Si", "C. No se", "D. Ni idea."
}
};

	char resCorrectas[] = { 'C', 'A', 'A', 'B' };

	int tam = sizeof(preguntas) / sizeof(preguntas[0]);
	char respuesta;
	int puntaje = 0;

	for (int i = 0; i < tam;i++) {
		std::cout << "*****************************\n";
		std::cout << preguntas[i] << "\n";
		std::cout << "*****************************\n";

		for (int j = 0; j < sizeof(opciones[i]) / sizeof(opciones[i][0]); i++) {
			std::cout << opciones[i][j] << "\n";

		}

		std::cin >> respuesta;
		respuesta = toupper(respuesta);

		if (respuesta == resCorrectas[i]) {
			std::cout << "Correcto! :D\n";
			puntaje++;
		}
		else {
			std::cout << "Incorrecto :(\n";
			std::cout << "Respuestas Correcta : " << resCorrectas[i] << "\n";
			puntaje--;
		}
	}

	std::cout << "******************************************\n";
	std::cout << "               Resultado               \n";
	std::cout << "******************************************\n";
	std::cout << "PREGUNTAS: " << tam << "\n";
	std::cout << "PREGUNTAS CORRECTAS: " << puntaje << "\n";
	std::cout << "PUNTAJE" << (puntaje /(double) tam) * 100 << "%";


	return 0;
}