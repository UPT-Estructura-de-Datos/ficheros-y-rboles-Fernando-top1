#include <stdio.h>
#include <string.h>

int main() {
    FILE *ficherou;
    char nombre[50], seccion[10];
    int i;

    ficherou = fopen("personas.txt", "wt");
    if (ficherou == NULL) {
        printf("Error al abrir el archivo para escritura.\n");
        return 1; 
    }

    printf("Programa para guardar el nombre y sección de tres personas.\n");

    for (i = 1; i <= 3; i++) {
        printf("Ingrese el nombre de la persona %d: ", i);
        fgets(nombre, sizeof(nombre), stdin); 
        nombre[strcspn(nombre, "\n")] = '\0'; 

        printf("Ingrese la sección de %s: ", nombre);
        fgets(seccion, sizeof(seccion), stdin); 
        seccion[strcspn(seccion, "\n")] = '\0'; 

 
        fprintf(ficherou, "Nombre: %s, Sección: %s\n", nombre, seccion);
    }

    fclose(ficherou); 

   
    printf("\nLos datos guardados son:\n");

 
    ficherou = fopen("personas.txt", "rt");
    if (ficherou == NULL) {
        printf("Error al abrir el archivo para lectura.\n");
        return 1; 
    }

    char linea[100];
    while (fgets(linea, sizeof(linea), ficherou)) {
        puts(linea);
    }

    fclose(ficherou); 

    printf("...Hasta luego!\n");
    return 0;
}


