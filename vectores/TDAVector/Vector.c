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


