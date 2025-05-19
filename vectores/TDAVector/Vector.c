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
int vectorInsertarAlFinal(Vector* v, int elem);
int vectorInsertarAlInicio(Vector* v, int elem);
int vectorInsertarEnPos(Vector* v, int elem, int pos);
int vectorInsertarEnPos(Vector* v, int elem, int pos);
int vectorOrdBuscar(const Vector* v, int elem);
int vectorDesordBuscar(const Vector* v, int elem);
bool vectorOrdEliminar(Vector * v, int elem);
bool vectorEliminarDePos(Vector* v, int pos);
void vectorOrdenar(Vector* v);
void vectorVaciar(Vector* v);
void vectorDestruir(Vector* v);
