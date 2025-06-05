#include <stdio.h>
#include <stdlib.h>
#include "../TDATexto/TDATexto.h"
char* normalizar(char* cadDest, const char* cadOrig);
int main()
{
    char cadOrig[] = "#$%cAdeNA&/(a)&/(/()=)NOrMaLiZaR";
    char cadDest[101];

    normalizar(cadDest, cadOrig);

    puts(cadDest);

    return 0;
}
char* normalizar(char* cadDest, const char* cadOrig)
{
   Texto secL;
    textoCrear(&secL, cadOrig);

    Texto secE;
    textoCrear(&secE, cadDest);

    Palabra pal;

   textoLeer(&secL, &pal);
    while(!textoFin(&secL))
    {
        palabraATitulo(&pal);
        textoEscribir(&secE, &pal);

        if(textoLeer(&secL, &pal))
        {
           textoEscribirCaracter(&secE, ' ');
        }
    }

    textoCerrar(&secE);

    return cadDest;
}
