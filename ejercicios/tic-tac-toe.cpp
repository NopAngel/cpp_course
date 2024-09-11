#include <iostream>
#include <ctime>

void dibujarTablero(char *espacios);
void turnoJugador(char *espacios, char jugador);
void turnoComputadora(char *espacios, char computadora);
bool verificarGanador(char *espacios, char jugador, char computadora);
bool verificarEmpate(char *espacios);

int main() {

	char espacios[9] = {'  ','  ','  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' ,'  ' };

	dibujarTablero(espacios);

	return 0;
}

void dibujarTablero(char* espacios) {

	std::cout << "\n";
	std::cout << "     |     |     | \n";
	std::cout << "   "<<espacios[0]<<"  |  "<<espacios[1]<<"   |  " << espacios[2] << "  | \n";
	std::cout << "     |     |     | \n";

	std::cout << "_____|_____|_____| \n";

	std::cout << "     |     |     | \n";
	std::cout << "\n";
	std::cout << "     |     |     | \n";
	std::cout << "   " << espacios[3] << "  |  " << espacios[4] << "   |  " << espacios[5] << "  | \n";
	std::cout << "     |     |     | \n";

	std::cout << "_____|_____|_____| \n";
	std::cout << "\n";
	std::cout << "     |     |     | \n";
	std::cout << "   " << espacios[6] << "  |  " << espacios[7] << "   |  " << espacios[8] << "  | \n";
	std::cout << "     |     |     | \n";

	std::cout << "_____|_____|_____| \n";

	std::cout << "     |     |     | \n";

	std::cout << "     |     |     | \n";
	std::cout << "\n";



};
void turnoJugador(char* espacios, char jugador) {
}
;
void turnoComputadora(char* espacios, char computadora) {

};
bool verificarGanador(char* espacios, char jugador, char computadora) {

};
bool verificarEmpate(char* espacios) {

};
