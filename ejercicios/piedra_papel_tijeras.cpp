#include <ctime>
#include <iostream>

char eleccionUsuario();
char eleccionComputadora();
void mostrarEleccion(char eleccion);
void elegirGanador(char jugador, char computadora, int vidas);


int main() {

	char jugador;
	char computadora;
	int sistemaVida = 3;
	
	computadora = eleccionComputadora();
	jugador = eleccionUsuario(sistemaVida);
	std::cout << "Jugador: ";
	mostrarEleccion(jugador);



	std::cout << "Computadora: ";
	mostrarEleccion(computadora);

	elegirGanador(jugador, computadora, sistemaVida);

	return 0;
}

char eleccionUsuario(int vidas) {

	char jugador;
	std::cout << "******************************\n";
	std::cout << "Piedra-Papel-Tijera | Jugador.\n";
	std::cout << "******************************\n";

	

	do{
		std::cout << "        Vidas:" << vidas << "         ";
		std::cout << "'r' Para piedra \n";
		std::cout << "'p' Para papel \n";
		std::cout << "'t' Para tijeras \n";
		std::cout << "Elige uno: ";
		std::cin >> jugador;
	} while (jugador != 'r' && jugador != 'p' && jugador != 't');
	return 0;
};
char eleccionComputadora() {

	srand(time(0));
	int num = rand() % 3 + 1;
	switch (num) {
	case 1:
		return 'r'; 
		
	case 2:
		return 'p';
		
	case 3:
		return 't';
		
	}

	 return 0;
};
void mostrarEleccion(char eleccion) {
	
	switch (eleccion) {
	case 'r':
		std::cout << "Piedra\n";
		break;
	case 'p':
		std::cout << "Papel\n";
		break;
	case 't':
		std::cout << "Tijera\n";
		break;
	}

};
void elegirGanador(char jugador, char computadora, int vidas) {
	switch (jugador)
	{
	case 'r':
		if (computadora == 'r') {
			std::cout << "Empate!\n";
		} else if (computadora == 'p') {
			std::cout << "Perdiste!!\n";
			vidas--;
		}
		else {
			std::cout << "Ganaste!\n";
		}
		break;

	case 'p':
		if (computadora == 'r') {
			std::cout << "Ganaste!\n";
		}
		else if (computadora == 'p') {
			std::cout << "Empate!!\n";
		}
		else {
			std::cout << "Perdiste!\n";
			vidas--;

		}
		break;

	case 't':
		if (computadora == 'r') {
			std::cout << "Perdiste!!\n";
			vidas--;

		}
		else if (computadora == 'p') {
			std::cout << "Ganaste!!\n";
		}
		else {
			std::cout << "Empate!\n";
		}
		break;

	}
	
};
