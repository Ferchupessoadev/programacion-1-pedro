/* 
Menu
*/
#include <iostram>


int main (int argc, char *argv[]) {
	int op;
	while (op == 4) {
		std::cout << "============" << std::endl;
		std::cout << "1. Archivo" << std::endl;
		std::cout << "2. Buscar" << std::endl;
		std::cout << "3. Copiar" << std::endl;
		std::cout << "4. Salir" << std::endl;
		std::cout << "============" << std::endl;
		std::cout << "Ingresa una opcion: ";
		std::cin >> op;
		switch (op) {
			case 1:
				std::cout << "Archivo" << std::endl;
			break;
			case 2:
				std::cout << "Buscar" << std::endl;
			break;
			case 3:
				std::cout << "Copiar" << std::endl;
			break;
			case 4:
				std::cout << "Salir" << std::endl;
			break;
			default:
				std::cout << "del 1 al 4, pendejo" << std::endl;
			break;
		}
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
