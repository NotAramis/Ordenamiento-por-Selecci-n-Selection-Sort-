#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indiceMinimo = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        if (indiceMinimo != i) {
            swap(arr[indiceMinimo], arr[i]);
        }
    }
}
void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int miArreglo[] = { 64, 25, 12, 22, 11 };
    int tamano = sizeof(miArreglo) / sizeof(miArreglo[0]);

    cout << "Arreglo original desordenado: \n";
    imprimirArreglo(miArreglo, tamano);

    selectionSort(miArreglo, tamano);

    cout << "\nArreglo ordenado por Seleccion: \n";
    imprimirArreglo(miArreglo, tamano);

    return 0;
}