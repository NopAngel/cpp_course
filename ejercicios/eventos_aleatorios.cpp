#include <iostream>
#include <ctime>

int main() {

	srand(time(0));

	int randNum = rand() % 5 + 1;

	switch (randNum) {
		case 1:
			std::cout << "Ganaste una calcomanía de autos";
			break;
		case 2:
			std::cout << "Ganaste una camiseta!";
			break;
		case 3:
			std::cout << "Ganaste una tarjeta de regalo!";
			break;
		case 4:
			std::cout << "Ganaste una comida!";
			break;

		case 5:
			std::cout << "Ganaste un pasaporte!";
			break;

		default:
			std::cout << "Usted no ha ganado nada...";

	}

	return 0;
}