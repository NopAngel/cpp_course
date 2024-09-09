#include <iostream>

int main() {

	// const es un tipo de variable QUE NUNCA SE MODIFICA (como si fuera un const de javascript.)
	
	const double PI = 3.14159;
	double radio = 10;
	double circunferencia = 2 * PI * radio;

	std::cout << circunferencia<<"  Centímetros";

	/*----*/

	const int velocidadDeLuz = 245548886;

	const int ancho = 1950;
	const int alto = 1080;

	return 0;
}