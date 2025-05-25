#include <stdio.h>
#include <stdlib.h>
#include "../TDAVector/Vector.h"
#include "./ErrorHandler/VectorErrorHandler.h"
#include "./ErrorHandler/VectorErrorHandler.h"
int main() {
///////////////////////////////////////////
    Vector v;
    vectorCrear(&v);
    v.vec[0] = 10;
    v.vec[1] = 20;
    v.vec[2] = 30;
    v.vec[3] = 40;
    v.vec[4] = 50;
    v.vec[5]= 0;
    v.vec[6]= 30;
    v.ce = 7;
///////////////////////////////////////////

   vectorMostrar(&v, "Vector antes: ");
   printf("\n");
///////////////////////////////////////////
    int res = EliminarTodasLasApariciones(&v, 30); //
///////////////////////////////////////////
    mostrarMensajeDeEstado(res);


///////////////////////////////////////////
   printf("\n");
   vectorMostrar(&v, "Vector despues: ");

///////////////////////////////////////////
    return 0;
}
