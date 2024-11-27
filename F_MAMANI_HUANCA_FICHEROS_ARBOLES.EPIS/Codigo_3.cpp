#include <fstream> // Biblioteca para el manejo de ficheros
#include <iostream>
using namespace std; // Biblioteca para la entrada-salida est�ndar

typedef char TCadena[30]; // Definici�n de tipo para cadenas de 30 caracteres

int main() {
    int i;
    float r;
    TCadena cad;
    ifstream fichin("EJEMPLOS.TXT"); // Declaraci�n y apertura del fichero

    if (!fichin) {
        cout << "\n Incapaz de crear o abrir el fichero ";
    } else {
        fichin >> i; // Lectura inicial (entero)
        
        // Observese la lectura adelantada!!!
        while (!fichin.eof()) { 
            cout << i << " "; // Lectura del valor 'i'
            fichin >> r; // Lectura de 'r' (float)
            cout << r << " "; // Imprimir 'r'
            fichin >> cad; // Lectura de la cadena 'cad'
            cout << cad << "\n"; // Imprimir 'cad'
            fichin >> i; // Leer siguiente valor 'i'
        }
        fichin.close(); // Cerrar el fichero
    } // Fin del main
}

