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
size_t mi_strlen(const char*palabra){
    size_t cont = 0;
    while(*palabra != '\0'){
        cont++;
        palabra++;
    }
    return cont;
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
};
bool esPalindromo(const String* str){
 const char*start = str->cad;
 const char*end = start;

    while(*end != '\0'){
        end++;
    }
    end--;
    while(start<end){
        if(*start != *end){
            return false;
        }
        start++;
        end--;
    }
    return true;
};
int stringToInteger(const String* str) {
    const char* ch = str->cad;
    int num = 0;
    int signo = 1;

    // Ignorar todos los espacios en blanco al inicio
    while (*ch == ' ') {
        ch++;
    }

    if(*ch == '-'){
        signo = -1;
        ch++;
    }else if( *ch == '+'){
        ch++;
    }

    // Verificamos si hay al menos un dígito
    if (*ch < '0' || *ch > '9') {
        return NO_NUM;
    }

    while (*ch >= '0' && *ch <= '9') {
        num = num * 10 + (*ch - '0');
        ch++;
    }

    return signo*num;
};
int mi_strncmp(const char*s1, const char*s2, size_t n){

    while(*s1 && *s2 && n>0){
        if(*s1 != *s2){
            return (unsigned char)(*s1)-(unsigned char)(*s2);
        }
        n--;
        s1++;
        s2++;
    }
    if(n==0) return 0;
    if(*s1) return 1;
    if(*s2) return -1;
    return 0;
};
int stringContarApariciones(const String* str, const char* palabra) {
    const char* texto = str->cad;
    size_t cont = 0;

    if (texto == NULL || *texto == '\0' || palabra == NULL || *palabra == '\0') return STR_VACIO;

    int palabraLen = mi_strlen(palabra);

    while (*texto) {
        if (mi_strncmp(texto, palabra, palabraLen) == 0) {
            cont++;
            texto += palabraLen;
        } else {
            texto++;
        }
    }

    return cont;
}
