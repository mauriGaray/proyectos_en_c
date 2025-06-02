#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#define MAX_STR 100
#define STR_VACIO -3
#define NO_NUM -2
#define ERROR -1
#define EXITO 0

typedef struct {
    char cad[MAX_STR];
} String;

void stringInicializar(String*str);
int stringLongitud(String*str);
int stringCopiar(String* destino, String* origen);
int stringEscribir(String* str, char*palabra);
size_t mi_strlen(const char*palabra);
void stringMostrar(const String* str);
bool esPalindromo(const String* str); //1.6
int stringToInteger(const String*str); //1.7
int stringContarApariciones(const String*str, const char* palabra); //1.8
int mi_strncmp(const char*s1, const char*s2, size_t n);
#endif // STRINGS_H_INCLUDED
