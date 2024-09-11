#include <iostream>

class Humano {
	public:
		std::string nombre;
		std::string ocupacion;
		int edad;

		void Comer() {
			std::cout << "Esta persona esta comiendo!\n";
		}

		void Beber() {
			std::cout << "Esta persona esta bebiendo!\n";
		} void Dormir() {
			std::cout << "Esta persona esta durmiendo!\n";
		}
};

int main() {

	Humano humano1;

	humano1.nombre = "Juan";
	humano1.edad = 25;
	humano1.ocupacion = "Doctor";

	return 0;
}