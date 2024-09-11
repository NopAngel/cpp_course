#include <iostream>

int main() {

	// new..

	int *pNum = NULL;

	pNum = new int;

	*pNum = 25;

	std::cout << "Direccion: " << pNum << '\n';
	std::cout << "Valor: " << *pNum << '\n';

	delete pNum;

	return 0;
}