#ifndef TDAPALABRA_H
#define TDAPALABRA_H
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#define NO_NUM -2
#define PUNTERO_NULO -1
#define EXITO 0
#define MAX_STR 20

typedef struct {
    char cad[MAX_STR];
} Palabra;
void palabraInicializar(Palabra*str);
int palabraEscribir(Palabra* str, char*palabra);
void palabraMostrar(const Palabra* str);
bool esPalindromo(const Palabra* str); //1.6
int palabraANumero(const Palabra*str); //1.7
void palabraATitulo(Palabra*str);

#endif // TDAPALABRA_H
