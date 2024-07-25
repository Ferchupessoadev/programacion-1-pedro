
/*
Calificaciones segun nota
*/
#include <cmath>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  int nota;
  std::string msj;
  std::cout << "Ingresa una nota: ";
  std::cin >> nota;
  std::cout << std::endl;

  switch (nota) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    msj = "Suspenso";
    break;
  case 5:
  case 6:
    msj = "Aprobado";
    break;
  case 7:
  case 8:
    msj = "Notable";
    break;
  case 9:
    msj = "Sobresaliente";
    break;
  case 10:
    msj = "Matricula de honor";
    break;
  default:
    msj = "Error";
    break;
  }

  std::cout << "Calificaciones para ('" << nota << "'): " << msj << std::endl;
  return 0;
}
