#include "Vector.h"

bool vectorCrear(Vector* v){
    v->ce = 0;
    return true;
};
int vectorOrdInsertar(Vector* v, int elem){
    if(v->ce == TAM){
        return LLENO;
    }
    int*i = v->vec;
    int*ult = v->vec + v->ce-1;

    while(i<= ult && *i<elem  ){
        i++;
    }
    if(*i == elem  && i<= ult){
        return DUPLICADO;
    }

    int*posIns = i;
    for(i = ult; i >= posIns; i--){
        *(i+1)=*i;
    }

    *posIns=elem;
    v->ce++;

    return TODO_OK;



};
int EliminarElemPorPos(Vector* v, size_t pos) {
    if (pos >= v->ce) return POS_INV;

    int* elim = v->vec + pos;
    int* ult = v->vec + v->ce - 1;

    for (int* p = elim; p < ult; p++) {
        *p = *(p + 1);
    }

    v->ce--;
    return TODO_OK;
};//1.3
int EliminarPrimeraAparicion(Vector*v, int elem){
    int*p = v->vec;
    int*ult = v->vec + v->ce;
    while(*p!=elem && p < ult ){
        p++;
    }
    if(p == ult){
        return NO_ENCONTRADO;
    }
    size_t pos = p - v->vec;
    return EliminarElemPorPos(v, pos);

};

int EliminarTodasLasApariciones(Vector* v, int elem) {
    int* lectura = v->vec;
    int* escritura = v->vec;
    int* ult = v->vec + v->ce;

    while (lectura < ult) {
        if (*lectura != elem) {
            *escritura = *lectura;
            escritura++;
        }
        lectura++; // Esto va siempre
    }

    v->ce = escritura - v->vec;
    return TODO_OK;
}
