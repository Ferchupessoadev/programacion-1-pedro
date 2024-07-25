/* 
Encuentra Impares y Múltiplos de 3 a partir de un numero:
*/
#include <iostream>

int main (int argc, char *argv[]) {
	int a;
	std::cout << "Ingresa un numero: ";
	std::cin >> a;
	std::cout << std::endl;
	for (int i = 1; i <= a; i++) {
		if (i % 3 == 0) {
			std::cout << i << " es multiplo de 3" << std::endl;
		}
		else {
			std::cout << i << " no es multiplo de 3" << std::endl;
		}
	}
	
	// encontremos Impares
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 1) {
			std::cout << i << " es impar" << std::endl;
		}
	}
	
	return 0;
}
