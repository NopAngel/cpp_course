#include <iostream>

int main() {
	/*
	int mes;
	std::cout << "Ingresa el Mes (1-12): ";
	std::cin >> mes;
	/*
	*
	* MAL EJEMPLO
	*
	*
	* LOS SWITCH SON UNA REPRESENTACION DE COMO NO DEBERIA SER UN IF, SI TIENES UNA CADENA MUY LARGA DE IF'S,
	* ES MEJOR USAR SWTICHES.
	*
	*
	if (mes == 1) {
		std::cout << "Es Enero";
	}
	else if (mes == 2) {
		std::cout << "Es Febrero";
	}
	else if (mes == 3) {
		std::cout << "Es Marzo";
	}
	else if (mes == 4) {
		std::cout << "Es Abril";
	}
	else if (mes == 5) {
		std::cout << "Es Mayo";
	}
	else if (mes == 6) {
		std::cout << "Es Junio";
	}
	else if (mes == 7) {
		std::cout << "Es Julio";
	}
	else if (mes == 8) {
		std::cout << "Es Agosto";
	}

	
	switch (mes) {
	case 1:
		std::cout << "Es Enero";
		break;
	case 1:
		std::cout << "Es Febrero";
		break;
	case 2:
		std::cout << "Es Marzo";
		break;
	case 3:
		std::cout << "Es Abril";
		break;
	case 4:
				
		std::cout << "Es Mayo";
				
	   break; 
	case 5:
		std::cout << "Es Junio";
		break;
	

	default:
		std::cout << "Por favor, ingrese solo numeros.";
		*/

	char calificacion;

	std::cout << "Calificacion: ";
	std::cin >> calificacion;


	switch (calificacion) {
	case 'a':
		std::cout << "Lo hiciste genial!";
		break;
	case 'b':
		std::cout << "Lo hiciste bien!";
		break;
	case 'c':
		std::cout << "Lo hiciste regular.!";
		break;
	case 'd':
		std::cout << "No lo hiciste bien.!";
		break;
	case 'f':
		std::cout << "Fallaste.";
		break;
	default:
		std::cout << "Por favor ingrese una nota.";
	}

	return 0;

}