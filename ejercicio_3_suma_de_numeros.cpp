#include <iostream>

int suma (int a, int b) {
	return a + b;
}

int main (int argc, char *argv[]) {
	int a, b;
	std::cout << "Ingresa el primer numero: ";
	std::cin >> a;
	std::cout << "Ingresa el segundo numero: ";
	std::cin >> b;
	std::cout << std::endl << "La suma es: " << suma(a, b) << std::endl;
	return 0;
}
