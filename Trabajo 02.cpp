#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nombreArchivo = "nombre_archivo.txt";// Cambia el nombre del archivo aquí
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo: " << nombreArchivo << endl;
        return 1;
    }

    int cantidadNumeros = 0;
    int sumaNumeros = 0;
    int numero;
    while (archivo >> numero) {
        cantidadNumeros++;
        sumaNumeros += numero;
    }

    archivo.close();

    if (cantidadNumeros == 0) {
        cout << "No hay números en el archivo." << endl;
    } else {
        double promedio = static_cast<double>(sumaNumeros) / cantidadNumeros;
        cout << "Cantidad de números: " << cantidadNumeros << endl;
        cout << "Promedio de los números: " << promedio << endl;
    }

    return 0;
}