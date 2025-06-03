#include <stdio.h>
#include <stdlib.h>

#define FILAS 4
#define COLUMNAS 4
#define ORDEN 4

void** crearMatriz(size_t tamElem, int filas, int columnas);
void destruirMatriz(void** mat, int filas);
void inicializarMatriz(int filas, int columnas, int** mat);
void mostrarMatriz(int** mat, int filas);
int sumaDiagonalPrincipal(int orden, int** mat);
int sumaDiagonalSecundaria(int orden, int** mat);
int sumaTriangularInferiorDP(int orden, int** mat);
int sumaTriangularSuperiorDS(int orden, int** mat);


int main()
{
    // int matriz[FILAS][COLUMNAS] =
    // {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}
    // };

    int orden = ORDEN;

//    int (*matriz)[orden] = malloc(sizeof(int) * orden * orden);

    int** matriz = (int**)crearMatriz(sizeof(int), orden, orden);

    if(!matriz)
    {
        puts("Sin memoria.");
        return 1;
    }

    inicializarMatriz(orden, orden, matriz);

    mostrarMatriz(matriz, FILAS);

    printf("Suma diagonal Principal: %d\n", sumaDiagonalPrincipal(ORDEN, matriz));
    printf("Suma diagonal Secundaria: %d\n", sumaDiagonalSecundaria(ORDEN, matriz));
    printf("Suma Triangular Inferior DP: %d\n", sumaTriangularInferiorDP(ORDEN, matriz));
    printf("Suma Triangular Superior DS: %d\n", sumaTriangularSuperiorDS(ORDEN, matriz));

//    free(matriz);
    destruirMatriz((void**)matriz, orden);

    return 0;
}


void** crearMatriz(size_t tamElem, int filas, int columnas)
{
    void** matriz = malloc(filas * sizeof(void*));

    if(!matriz)
    {
        return NULL;
    }

    void** ult = matriz + filas - 1;

    for(void** i = matriz; i <= ult; i++)
    {
        *i = malloc(tamElem * columnas);

        if(!*i)
        {
            destruirMatriz(matriz, i - matriz);
            return NULL;
        }
    }

    return matriz;
}


void destruirMatriz(void** mat, int filas)
{
    void** ult = mat + filas - 1;

    for(void** i = mat; i <= ult; i++)
    {
        free(*i);
    }

    free(mat);
}


void inicializarMatriz(int filas, int columnas, int** mat)
{
    int cont = 1;

    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            mat[i][j] = cont++;
        }
    }
}



void mostrarMatriz(int** mat, int filas)
{
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < COLUMNAS; j++)
        {
            printf("%3d", mat[i][j]);
        }

        putchar('\n');
    }
}


int sumaDiagonalPrincipal(int orden, int** mat)
{
    int suma = 0;

    for(int i = 0; i < orden; i++)
    {
        suma += mat[i][i];
    }

    return suma;
}


int sumaDiagonalSecundaria(int orden, int** mat)
{
    int suma = 0;

    for(int i = 0, j = orden - 1; i < orden; i++, j--)
    {
        suma += mat[i][j];
    }

    return suma;
}


int sumaTriangularInferiorDP(int orden, int** mat)
{
    int suma = 0;

    for(int i = 1; i < orden; i++)
    {
        for(int j = 0; j < i; j++)
        {
            suma += mat[i][j];
        }
    }

    return suma;
}


int sumaTriangularSuperiorDS(int orden, int** mat)
{
    int suma = 0;
    int limI = orden - 2;

    for(int i = 0, limJ = limI; i <= limI; i++, limJ--)
    {
        for(int j = 0; j <= limJ; j++)
        {
            suma += mat[i][j];
        }
    }

    return suma;
}
