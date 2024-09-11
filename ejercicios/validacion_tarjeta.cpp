#include <iostream>

int obtenerDigito(const int numero);
int sumarDigitosImpares(const std::string numeroDeTarjeta);
int sumarDigitosPares(const std::string numeroDeTarjeta);

int main() {
	// Tajetas de Credito (Validacion usando el metodo Luhn)
	// 1 2 2 0 0 1 8 2 8 4 = 29
	// 0 1 0 9 0 3 4 4 = 21
	// 29 + 21 = 50

	std::string numeroDeTarjeta;
	int resultado = 0;

	std::cout << "Ingresa una tarjeta de credito #: ";
	std::cin >> numeroDeTarjeta;

	resultado = sumarDigitosPares(numeroDeTarjeta) + sumarDigitosImpares(numeroDeTarjeta);

	if (resultado % 10 == 0) {
		std::cout << numeroDeTarjeta << " esa tarjeta no es valido!";
	}
	else {
		std::cout << numeroDeTarjeta << " no es valida.";
	}


	return 0;
}

int obtenerDigito(const int numero) {
	//12 % 2                   1 = 3
	return numero % 10 + (numero / 10 % 10);
};
int sumarDigitosImpares(const std::string numeroDeTarjeta) {

	int suma = 0;
	for (int i = numeroDeTarjeta.size() - 2; i >= 0; i -= 2) {
		suma += numeroDeTarjeta[i] - '0';
	}

	return suma;
};
int sumarDigitosPares(const std::string numeroDeTarjeta) {
	int suma = 0;
	for (int i = numeroDeTarjeta.size() - 2; i >= 0;i-=2) {
		suma += obtenerDigito((numeroDeTarjeta[i] - '0') * 2); // 9 = 57 - 48 = 9
	}
	return suma;

};