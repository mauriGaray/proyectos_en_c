#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#define PNT_INV -1
typedef struct{
    int* vec;
    size_t ce;
    size_t cap;
} Vector;

bool vectorCrear(Vector* vector);





#endif // VECTOR_H_INCLUDED
