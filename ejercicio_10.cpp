#include <iostream>
/*
Suma del cuadrado de los elementos de un vector.

Ejemplo:
Vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
Suma = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 + 9^2 + 10^2
*/

#define ARREGLO_MAX 100
int main() {
    int cantidad, i;

    float vector[ARREGLO_MAX], cuadrado, resultado;
    std::cout << "===================================================\n";
    std::cout << "-. Vectores - Suma del Cuadrado de los elementos .-\n";
    std::cout << "===================================================\n";
    std::cout << "> Ingresar la cantidad de elementos del Vector[N]: ";
    std::cin >> cantidad;

    while ((cantidad <= 0)) {
        std::cout << ">> Debe introducir un numero positivo no nulo: \n";
        std::cin >> cantidad;
    }

    // Cargamos el vector
    for (i = 0; i < cantidad; i += 1) {
        std::cout << "\n > Ingresar el numero de la posición Vector[" << i
                  << "]: ";
        std::cin >> vector[i];
    }

    // Hacemos los calculos
    for (i = 0; i < cantidad; i += 1) {
        cuadrado = vector[i] * vector[i];
        resultado = resultado + cuadrado;
    }

    std::cout
        << ">>>> La Suma de los Cuadrados de los elementos del Vector es: "
        << resultado << std::endl;
    return 0;
}
