#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

int main() {
    FILE *archivo;
    char linea[100];
    archivo = fopen("cadenas.txt","r");

    if(!archivo){
        printf("No se pudo abrir ni crear archivo");
        return 1;
    }

    while(fgets(linea, sizeof(linea), archivo) != NULL){
        printf("%s", linea);

    }
fclose(archivo);


    return 0;
}
