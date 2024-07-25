/*
Realizar un programa que, tras leer un número entero positivo, determine el mayor
divisor de dicho número.
Por Ej. Si el usuario ingresa un 18 (dieciocho), el programa deberá emitir el resultado:
El Mayor Divisor de 18 es: 9
*/
#include <iostream>
#include <cmath>

int main (int argc, char *argv[]) {
	unsigned int num;
	unsigned int divisor;
	std::cout << "Ingresa un numero entero positivo: ";
	std::cin >> num;
	divisor = std::round((num / 2)); // rodendeo para arriba pero no da el resultado correcto
	std::cout << "El mayor divisor de " << num << " es: " << divisor << std::endl;
	return 0;
}
