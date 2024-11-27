#include <iostream>
#include <fstream>
#include <cstring>  // Para usar strcmp
using namespace std;

int main() {
    FILE* ptFichero;
    char fin[] = "fin";
    char frase[60];
    
    // Abrir el archivo en modo de escritura de texto
    ptFichero = fopen("registroDeUsuario.txt", "wt");
    
    if (ptFichero == NULL) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }
    
    cout << "PROGRAMA para ESCRIBIR FRASES." << endl;
    cout << "Cuando quiera salir, escriba la palabra 'fin'." << endl << endl;
    
    do {
        cout << "\nEscriba una FRASE:\n(o fin). \n";
        cin.getline(frase, 60); // Leer la frase desde el teclado
        if (strcmp(frase, fin) == 0)  // Verificar si la frase es "fin"
            break;
        
        // Escribir la frase en el archivo
        fprintf(ptFichero, "%s\n", frase);
    } while (strcmp(frase, fin) != 0);
    
    fclose(ptFichero); // Cerrar el archivo
    return 0;
}

