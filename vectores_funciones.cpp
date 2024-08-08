
#include <iostream>
#define MAX 10 // Maximo numero de posiciones del vector

using namespace std;

// DEFINIMOS LAS FUNCIONES
void cargarvector(int[], int);
void productoElementos(int[], int[], int[], int);
void sumaElementos(int[], int[], int[], int);
void restaElementos(int[], int[], int[], int);
void mostrarvector(int[], int);

int main() {
    int posiciones{0};
    int A[MAX], B[MAX], C[MAX];
    do {
        cout << "Introduzca la cantidad de posiciones del Vector[1-10]: \n";
        cin >> posiciones;
    } while (posiciones > MAX || posiciones < 1);

    cargarvector(A, posiciones);
    cout << "\n==> Vector A: \n";
    mostrarvector(A, posiciones);
    cargarvector(B, posiciones);
    cout << "\n==> Vector B: \n";
    mostrarvector(B, posiciones);

    // suma de elementos
    sumaElementos(A, B, C, posiciones);
    cout << "\n==> Resultados - Vector C (A + B): \n";
    mostrarvector(C, posiciones);

    // producto de elementos
    productoElementos(A, B, C, posiciones);
    cout << "\n==> Resultados - Vector C (A * B): \n";
    mostrarvector(C, posiciones);

    // resta de elementos
    restaElementos(A, B, C, posiciones);
    cout << "\n==> Resultados - Vector C (A - B): \n";
    mostrarvector(C, posiciones);
    return 0;
}

void cargarvector(int Z[], int posiciones) {
    int i;
    for (i = 0; i < posiciones; i++) {
        cout << " INGRESE EL NUMERO PARA LA POSICION " << i + 1 << ": \n";

        cin >> Z[i];
    }
}

void mostrarvector(int Z[], int posiciones) {
    int i;
    cout << "[ ";
    for (i = 0; i < posiciones; i++) {
        cout << Z[i] << " ";
    }
    cout << " ]\n";
}

void sumaElementos(int A[], int B[], int C[], int posiciones) {
    int i;
    for (i = 0; i < posiciones; i++) {
        C[i] = A[i] + B[i];
    }
}

void productoElementos(int A[], int B[], int C[], int posiciones) {
    int i;
    for (i = 0; i < posiciones; i++) {
        C[i] = A[i] * B[i];
    }
}

void restaElementos(int A[], int B[], int C[], int posiciones) {
    int i;
    for (i = 0; i < posiciones; i++) {
        C[i] = A[i] - B[i];
    }
}
