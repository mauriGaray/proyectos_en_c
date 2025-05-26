#include <stdio.h>
#include <stdlib.h>
#include "../TDAStrings/Strings.h"
int main()
{
    String s1;
    String s2;
    stringInicializar(&s1);
    stringInicializar(&s2);
    //////////////////////////////////////////////////////////

    stringEscribir(&s1, "Hola soy cadena 1");
    stringEscribir(&s2, "reconocer");
    bool res1 = esPalindromo(&s1);
    bool res2 = esPalindromo(&s2);

    //////////////////////////////////////////////////////////
    printf("Cadena 1: ");
    stringMostrar(&s1);
    printf("¿Es palindromo? %s\n", res1 ? "Si" : "No");

    printf("Cadena 2: ");
        stringMostrar(&s2);
    printf("¿Es palindromo? %s\n", res2 ? "Si" : "No");
    return 0;
}
