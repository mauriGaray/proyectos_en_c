#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#define TODO_OK 0
#define DUPLICADO 1
#define LLENO 2
#define CANT_INI 8
#define FACT_INCR 1.5
#define FACT_DECR 0.5
#define AUMENTAR 1
#define DISMINUIR 2
typedef struct
{
    void *vec;
    size_t ce;
    size_t cap;
    size_t tamEle;
} Vector;

bool vectorCrear(Vector *vector);    // malloc
bool redimensionarVector(Vector *vector, int operacion);
void vectorDestruir(Vector *vector); // free

#endif // VECTOR_H_INCLUDED
