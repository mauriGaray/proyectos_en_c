#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#define MAX_STR 20

#define LETRA_INVALIDA -7
#define PALABRA_INVALIDA -6
#define PUNTERO_NULO -5
#define FUERA_DE_RANGO -4
#define PALABRA_VACIA -3
#define NO_NUM -2
#define ERROR -1
#define EXITO 0
#define ES_LETRA 1


typedef struct {
    char cad[MAX_STR];
} String;
int mi_strncmp(const char*s1, const char*s2, size_t n);
int esLetra(int c);
size_t mi_strlen(const char*palabra);
int mi_tolower(int c);
int mi_toUpper(int c);
/////////////////////////////////////////////////////////
void stringInicializar(String*str);
int stringLongitud(String*str);
int stringCopiar(String* destino, String* origen);
int stringEscribir(String* str, char*palabra);
void stringMostrar(const String* str);
bool esPalindromo(const String* str); //1.6
int stringToInteger(const String*str); //1.7
int stringContarApariciones(const String*str, const char* palabra); //1.8
void stringATitulo(String*str);

#endif // STRINGS_H_INCLUDED
