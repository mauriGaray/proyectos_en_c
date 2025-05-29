#ifndef VECTORESDINAMICOS_H_INCLUDED
#define VECTORESDINAMICOS_H_INCLUDED
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#define TODO_OK 0
#define POS_INV -1
#define LLENO 1
#define DUPLICADO 2
#define NO_ENCONTRADO 3

typedef struct{
    int* vec;
    size_t ce;
    size_t cap;
} VectorDinamico;

bool vectorCrear(VectorDinamico* vector);
int vectorOrdBuscar (VectorDinamico* vector, int elem);
void vectorMostrar(const VectorDinamico* vector, const char* mensaje);
int vectorOrdInsertar(VectorDinamico* vector, int elem);
int EliminarElemPorPos(VectorDinamico* vector, size_t pos );//1.3
int EliminarPrimeraAparicion(VectorDinamico* vector, int elem); //1.4
int EliminarTodasLasApariciones(VectorDinamico* vector, int elem); //1.5


#endif // VECTORESDINAMICOS_H_INCLUDED
