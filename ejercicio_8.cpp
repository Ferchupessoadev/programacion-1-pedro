/*
Realizar un programa que, tras leer un número natural, escriba por pantalla los
cinco primeros números impares que sean mayores que dicho número y múltiplo de
tres. Por Ej. Si el usuario ingresa un 7 (siete), el programa deberá emitir el
resultado: Los 5 Impares y Múltiplos de 3 a partir de 7 son: 9 - 15 - 21 - 27 -
33
*/

#include <iostream>

int main() {
    int numero, contador = 0;

    std::cout << "Ingrese un número natural: ";
    std::cin >> numero;

    while (numero <= 0) {
        std::cout
            << "El número ingresado no es válido. Debe ser un número natural."
            << std::endl;
        std::cout << "Ingrese un número natural: ";
        std::cin >> numero;
    }

    int candidato = numero + (numero % 2 == 0 ? 1 : 2);

    std::cout << "Los 5 Impares y Múltiplos de 3 a partir de " << numero
              << " son: ";

    while (contador < 5) {
        if (candidato % 3 == 0) {
            std::cout << candidato;
            if (contador < 4) {
                std::cout << " - ";
            }
            contador++;
        }
        candidato += 2;
    }

    std::cout << std::endl;
    return 0;
}
