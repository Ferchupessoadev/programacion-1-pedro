#include <iostream>

/* Suma de N numeros Naturales */
int main (int argc, char *argv[]) {
	int num, suma;
	std::cout << "Ingresa un numero natural: ";
	std::cin >> num;
	while (num <= 0) {
		std::cout << "El numero debe ser mayor a 0" << std::endl;
		std::cout << "Ingresa un numero natural: ";
		std::cin >> num;
	}
	for (int i = 1; i <= num; i++) {
		suma += i;
	}
	std::cout << "La suma es: " << suma << std::endl;
	return 0;
}
