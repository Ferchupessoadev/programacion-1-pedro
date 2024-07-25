#include <iostream>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	char var[20];
	std::cout << "Hola - Ingrese su nombre: " << std::endl;
	std::cin >> var;
	std::cout << std::endl << "Su Nombre es: " << var;
	return 0;
}
