#ifndef TDATEXTO_H
#define TDATEXTO_H
#include <stdbool.h>


typedef struct
{
    char* cur;
    bool finSec;
} Texto;

void textoCrear(Texto* sec, const char* cad);
bool textoLeer(Texto* sec, Palabra* pal);
bool textoFin(const Texto* sec);
void textoEscribir(Texto* sec, const Palabra* pal);
void textoEscribirCaracter(Texto* sec, char c);
void textoCerrar(Texto* sec);



#endif // TDATEXTO_H
