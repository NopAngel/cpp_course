#include <iostream>


void hornearPizza();
void hornearPizza(std::string ingrediente_uno);
void hornearPizza(std::string ingrediente_uno, std::string ingrediente_dos);

int main() {

	hornearPizza("Muzzarella", "Peperoni");

	return 0;
}

void hornearPizza() {
	std::cout << "Aqui esta tu Pizza!\n";
}

void hornearPizza(std::string ingrediente_uno) {
	std::cout << "Aqui esta tu pizza de " << ingrediente_uno << "\n";
}

void hornearPizza(std::string ingrediente_uno, std::string ingrediente_dos) {
	std::cout << "Aqui esta tu pizza de " << ingrediente_uno << " y " << ingrediente_dos <<
		"\n";
}