#include <iostream>

// el mayor de tres numeros.
int main (int argc, char *argv[]) {
	int a, b, c;

	std::cout << "Ingresa el primer numero: ";
	std::cin >> a;
	std::cout << "Ingresa el segundo numero: ";
	std::cin >> b;
	std::cout << "Ingresa el tercer numero: ";
	std::cin >> c;

	if (a > b) {
		if (a > c) {
			std::cout << std::endl << "El mayor es: " << a << std::endl;
		}
		else {
			std::cout << std::endl << "El mayor es: " << c << std::endl;
		}
	}
	else {
		if (b > c) {
			std::cout << std::endl << "El mayor es: " << b << std::endl;
		}
		else {
			std::cout << std::endl << "El mayor es: " << c << std::endl;
		}
	}

	return 0;
}
