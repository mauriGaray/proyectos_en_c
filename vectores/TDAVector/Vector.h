#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>
#include <stddef.h>
#define TAM 10
#define TODO_OK 0
#define POS_INV -1
#define LLENO 1
#define DUPLICADO 2
#define NO_ENCONTRADO 3

typedef struct {
    int vec[TAM];
    size_t ce;

} Vector;

bool vectorCrear(Vector* v);
int vectorOrdInsertar(Vector* v, int elem);
int EliminarElemPorPos(Vector*v, size_t pos );//1.3
int EliminarPrimeraAparicion(Vector*v, int elem); //1.4
int EliminarTodasLasApariciones(Vector*v, int elem); //1.5

#endif // VECTOR_H
