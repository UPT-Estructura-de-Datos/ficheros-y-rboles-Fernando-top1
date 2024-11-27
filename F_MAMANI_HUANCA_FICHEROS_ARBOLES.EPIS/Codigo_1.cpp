#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream archivo;  // objeto de la clase ofstream
    archivo.open("datos.txt");
    archivo << "Primera linea de texto" << endl;
    archivo << "Segunda linea de texto" << endl;
    archivo << "Eltima linea de texto" << endl;
    archivo.close();
    return 0;
}

