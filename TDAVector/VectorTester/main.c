#include <stdio.h>
#include <stdlib.h>
#include "../TDAVectorDinamico/vector.h"
#define AUMENTAR 1
int main() {
    system("chcp 1252 > nul")
Vector vectorDeEnteros;

vectorCrear(&vectorDeEnteros);
redimensionarVector(&vectorDeEnteros, AUMENTAR);
vectorDestruir(&vectorDeEnteros);
    return 0;
}
