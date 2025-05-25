#include <stdio.h>

#define TODO_OK 0
#define POS_INV -1
#define LLENO 1
#define DUPLICADO 2
#define NO_ENCONTRADO 3

void mostrarMensajeDeEstado(int codigo) {
    switch (codigo) {
        case TODO_OK:
            printf("Operacion exitosa.\n");
            break;
        case POS_INV:
            printf("Posicion inválida.\n");
            break;
        case LLENO:
            printf("Estructura llena.\n");
            break;
        case DUPLICADO:
            printf("Elemento duplicado.\n");
            break;
        case NO_ENCONTRADO:
            printf("Elemento no encontrado.\n");
            break;
        default:
            printf("Error desconocido (codigo %d).\n", codigo);
            break;
    }
}
