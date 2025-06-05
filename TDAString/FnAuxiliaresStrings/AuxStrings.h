#ifndef AUXSTRINGS_H
#define AUXSTRINGS_H
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#define PUNTERO_NULO -3
#define NO_ES_LETRA 0
#define ERROR -1
#define EXITO 0
#define ES_LETRA 1

int mi_strncmp(const char*s1, const char*s2, size_t n);
int esLetra(int c);
size_t mi_strlen(const char*palabra);
int mi_tolower(int c);
int mi_toUpper(int c);
int mi_strcpy(char *dest, const char *src);

#endif // AUXSTRINGS_H

