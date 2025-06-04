#include "AuxStrings.h"

int mi_strncmp(const char*s1, const char*s2, size_t n){
    if(s1 == NULL || s2 == NULL ) {
        puts("(null)");
        return PUNTERO_NULO;
    }
   while(n > 0 && *s1 && *s2){
        if(*s1 != *s2){
            return (unsigned char)(*s1)-(unsigned char)(*s2);
        }
        s1++;
        s2++;
        n--;

    }
    if(n==0) return 0;
    if(*s1) return 1;
    if(*s2) return -1;
    return 0;
};

int esLetra(int c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return ES_LETRA;  // Verdadero
    }
    return NO_ES_LETRA;      // Falso
}

size_t mi_strlen(const char*palabra){
    size_t cont = 0;
    while(*palabra != '\0'){
        cont++;
        palabra++;
    }
    return cont;
};

int mi_tolower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int mi_toUpper(int c){
    if(c>='a' && c<='z'){
        return c - 32;
    }
    return c;
}

int mi_strcpy(char *dest, const char *src){
  while(*src != '\0'){
    *dest = *src;
    dest++;
    src++;
  }
  *dest= '\0';
  return EXITO;
}

