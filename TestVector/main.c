#include <stdio.h>
#include <stdlib.h>
#include "../TDAVector/Vector.h"

int main()
{
    printf("Hello world!\n");

    Vector miVec;
    vectorCrear(&miVec);
    vectorOrdInsertar(&miVec, 10);
    vectorOrdInsertar(&miVec, 1);
    vectorOrdInsertar(&miVec, 8);
    vectorOrdInsertar(&miVec, 2);
    vectorOrdInsertar(&miVec, 9);
    vectorOrdInsertar(&miVec, 3);
    vectorOrdInsertar(&miVec, 5);
    vectorOrdInsertar(&miVec, 10);
    vectorOrdInsertar(&miVec, 11);

    return 0;
}
