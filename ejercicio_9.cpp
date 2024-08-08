/*
Realizar un programa que, tras leer un número entero positivo, determine el
mayor divisor de dicho número. Por Ej. Si el usuario ingresa un 18 (dieciocho),
el programa deberá emitir el resultado: El Mayor Divisor de 18 es: 9
*/

#include <iostream>

int main() {
    int numero{0};

    // Solicitar al usuario que ingrese un número entero positivo
    std::cout << "Introduce un numero entero positivo: ";
    std::cin >> numero;

    while (numero <= 0) {
        std::cout << "El número debe ser entero y positivo." << std::endl;
        std::cout << "Introduce un numero entero positivo: ";
        std::cin >> numero;
    }

    int mayorDivisor = 1;

    for (int i = 1; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            mayorDivisor = i;
        }
    }

    if (numero > 1) {
        std::cout << "El mayor divisor distinto del numero " << numero << " es "
                  << mayorDivisor << "." << std::endl;
    } else {
        std::cout << "El número 1 no tiene divisores distintos a sí mismo."
                  << std::endl;
    }

    return 0;
}
