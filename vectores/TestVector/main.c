#include <stdio.h>
#include <stdlib.h>
#include "../TDAVector/Vector.h"

int main() {
///////////////////////////////////////////
    Vector v;
    vectorCrear(&v);
    v.vec[0] = 10;
    v.vec[1] = 20;
    v.vec[2] = 30;
    v.vec[3] = 40;
    v.vec[4] = 50;
    v.vec[5]= 30;
    v.vec[6]= 30;
    v.ce = 7;
///////////////////////////////////////////
    printf("Vector antes:\n");
    for (size_t i = 0; i < v.ce; i++) {
        printf("%d ", v.vec[i]);
    }
    printf("\n");
///////////////////////////////////////////
    int res = EliminarTodasLasApariciones(&v, 30); //
///////////////////////////////////////////
    if (res == TODO_OK) {
        printf("Elementos eliminados.\n");
    } else if (res == POS_INV) {
        printf("Posición inválida.\n");
    }
///////////////////////////////////////////
    printf("Vector despues:\n");
    for (size_t i = 0; i < v.ce; i++) {
        printf("%d ", v.vec[i]);
    }
    printf("\n");
///////////////////////////////////////////
    return 0;
}
