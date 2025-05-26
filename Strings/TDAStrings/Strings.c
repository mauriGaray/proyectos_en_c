#include "Strings.h"

void stringInicializar(String*str){
    char*p= str->cad;
    *p='\0';
};
int stringLongitud(String*str){
    char*p = str->cad;
    int i = 0;
    while(*p != '\0'){
        i++;
        p++;
    }
    return i;
};
int stringCopiar(String* destino, String* origen){
  char* src = origen->cad;
  char* dest = destino->cad;

  while(*src != '\0'){
    *dest = *src;
    dest++;
    src++;
  }
  *dest= '\0';
  return EXITO;
};
int stringEscribir(String* str, char*palabra){
    char* destino = str->cad;
    char* origen = palabra;
    int i = 0;
    while( *origen != '\0' && i < MAX_STR-1 ){
        *destino = *origen;
        destino++;
        origen++;
        i++;
    }

    *destino = '\0';

    return EXITO;
};
void stringMostrar(const String* str) {
    printf("%s\n", str->cad);
}
bool esPalindromo(const String* str){
    const char*start = str->cad;
    const char*end = start;
    while(*end != '\0'){
        end++;
    }
    end--;
    while(start<end){
        if (*start != *end) {
            return false; // Se rompió la igualdad, no es palíndromo
        }
        start++;
        end--;
    }

    return true;
};
