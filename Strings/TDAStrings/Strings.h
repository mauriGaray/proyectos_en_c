#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED
#include <stdio.h>
#include <stdbool.h>
#define MAX_STR 100
#define ERROR -1
#define EXITO 0
typedef struct {
    char cad[MAX_STR];
} String;

void stringInicializar(String*str);
int stringLongitud(String*str);
int stringCopiar(String* destino, String* origen);
int stringEscribir(String* str, char*palabra);
void stringMostrar(const String* str);
bool esPalindromo(const String* str);
#endif // STRINGS_H_INCLUDED
