#ifndef TDATEXTO_H
#define TDATEXTO_H
#include "../TDAPalabra/TDAPalabra.h"
#include "../FnAuxiliaresStrings/AuxStrings.h"
#include <stdbool.h>
#define PALABRA_VACIA -2
#define ERROR -1
#define EXITO 0

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
int textoContarApariciones(const Texto* str, const char *palabra);
//char* normalizar(char* cadDest, const char* cadOrig);

#endif // TDATEXTO_H
