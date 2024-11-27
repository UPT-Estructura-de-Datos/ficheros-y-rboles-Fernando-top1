#include <fstream> // Biblioteca para el manejo de ficheros
#include <iostream>
using namespace std; // Biblioteca para la entrada-salida estándar

int main() {
    ofstream fichout("EJEMPLOS.TXT", ios::out);
    
    if (!fichout) 
        cout << "\n Inacapaz de crear este o abrir el fichero \n";
    else {
        fichout << 1 << " " << 5.0 << " APROBADO" << endl;  // Escritura en el fichero
        fichout << 2 << " " << 1.1 << " SUSPENSO" << endl;  // Corregido sintaxis
        fichout << 3 << " " << 8.0 << " NOTABLE" << endl;   // Corregido sintaxis
        fichout.close();
    }
}

