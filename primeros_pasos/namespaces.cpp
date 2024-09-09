#include <iostream>

namespace primero {
	int x = 1;

} // muy parecidos a las funciones.

namespace segundo {
	int x = 2;
}

int main() {

	// using namespace std; // va usar todas las cosas de la namespace primero (traer datos.)
	using std::cout;
	using std::string;
	string nombre = "Alex";

	cout << "X = " << segundo::x;

	return 0;
}