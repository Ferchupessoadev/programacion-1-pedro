#include <iostream>

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
  	for (i = 1; i <= cantidad; i += 1) {
		std::cout << "\n > Ingresar el numero de la posición Vector[" << i << "]: ";
		std::cin >> vector[i - 1];
  	}

  	// Hacemos los calculos
  	for (i = 1; i <= cantidad; i += 1) {
		cuadrado = vector[i - 1] * vector[i - 1];
  		resultado = resultado + cuadrado;
  	}

	std::cout << ">>>> La Suma de los Cuadrados de los elementos del Vector es: " << resultado << std::endl;
  	return 0;
}
