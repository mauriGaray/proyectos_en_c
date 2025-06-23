#include "vector.h"
bool vectorCrear(Vector *vector)
{
    vector->ce = 0;
    vector->vec = malloc(CANT_INI * sizeof(int));
    if (!vector->vec)
    {
        vector->cap = 0;
        return false;
    }
    vector->cap = CANT_INI;
    return true;
}

void vectorDestruir(Vector *vector)
{
    free(vector->vec);
    vector->vec = NULL;
    vector->ce = 0;
    vector->cap = 0;
}

bool redimensionarVector(Vector *vector, int operacion){
    size_t nuevaCap = operacion == AUMENTAR ? vector->cap * FACT_INCR : vector->cap * FACT_DECR;
    int *nVec = realloc(vector->vec, nuevaCap * sizeof(int));
    if(!nVec){
        return false;
    }
    printf("Se redimensiona de %d a %d", &vector->cap, &nuevaCap )
    vector->vec = nVec;
    vector->cap = nuevaCap;

    return true;
}
