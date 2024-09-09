#include <iostream>

int main() {

	//double x = (int)3.14;
	/*
	char x = 100;

	std::cout << (char)100;*/

	int PCorrecta = 8;
	int PTotal = 10;

	double puntaje = PCorrecta / (double)PTotal * 100;

	std::cout << puntaje << "%";

	return 0;
}