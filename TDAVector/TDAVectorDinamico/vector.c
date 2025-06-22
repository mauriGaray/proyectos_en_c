#include "vector.h"
bool vectorCrear(Vector* vector){
   vector->ce=0;
   vector->vec=malloc(CANT_INI*sizeof(int));
    if(!vector->vec){
            vector-> cap = 0;
        return false;
    }
    return true;
};
