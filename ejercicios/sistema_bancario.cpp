#include <limits>
#include <iomanip>
#include <iostream>

void mostrarSaldo(double saldo);
double deposito();
double retirar(double saldo);

int main() {

	double saldo = 123;
	int opc = 0;

	do {
		std::cout << "********************************";
		std::cout << "******* Ingrese una opcion *****";

		std::cout << "********************************";
		std::cout << "Ingrese una opcion: \n";
		std::cout << "1. Mostrar saldo \n";
		std::cout << "2. Depositar dinero \n";
		std::cout << "3. Retirar dinero \n";
		std::cout << "4. Salir del sistema \n";
		std::cin >> opc;

		if (!(std::cin >> opc)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Entrada no valida! Intente de nuevo.\n";
			continue;
		}

		switch (opc)
		{

		case 1:
			mostrarSaldo(saldo);
			break;
		case 2:
			saldo += deposito();
			mostrarSaldo(saldo);
			break;

		case 3:
			saldo -= retirar(saldo);
			mostrarSaldo(saldo);
			break;

		case 4:
			std::cout << "Gracias por la visita\n";

		default:
			std::cout << "Eleccion no valida!\n"
		}
	} while (opc != 4);

	return 0;
}

void mostrarSaldo(double saldo) {
	std::cout << "Su balance es: " << saldo << std::setprecision(2) << std::fixed << "\n";
}

double deposito() {

	double monto = 0;

	std::cout << "Cual es el monto que usted quiere depositar?:  ";

	std::cin >> monto;

	if (monto > 0) {

		return monto;
	}
	else {
		return 0;
	}
}

double retirar(double saldo) {

	double monto = 0;
	std::cout << "Ingrese el monto a retirar:  ";
	std::cin >> monto;

	if (monto > saldo) {
		std::cout << "Fondos insuficientes! \n";
		return 0;
	}
	else if (monto < 0) {
		std::cout << "Esa no es una cantidad valida!\n";
	}
	else {
		return monto;
	}
}