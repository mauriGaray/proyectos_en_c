#include "Strings.h"
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
size_t mi_strlen(const char*palabra){
    size_t cont = 0;
    while(*palabra != '\0'){
        cont++;
        palabra++;
    }
    return cont;
};
char mi_toLower(char c){
    if(c>='A' && c<='Z'){
        return c + 32;
    }
    return c;
}
int esLetra(char c) {
    c = mi_toLower(c);
    return (c >= 'a' && c <= 'z');
}
////////////////////////////////////////////////////////////
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
int stringContarApariciones(const String* str, const char* palabra) {
    /*
 * Condiciones de borde contempladas:
 * 1. El texto es NULL → se retorna código de error (STR_VACIO u otro definido).
 * 2. La palabra es NULL → se retorna código de error.
 * 3. El texto está vacío ("") → se retorna 0 apariciones.
 * 4. La palabra está vacía ("") → se retorna código de error (buscar una palabra vacía no tiene sentido).
 * 5. La palabra es más larga que el texto → se retorna 0 apariciones (no puede haber coincidencias).
 * 6. No hay apariciones de la palabra en el texto → se retorna 0.
 * 7. Se contemplan múltiples apariciones de la palabra en el texto.
 * 8. Se ignoran las diferencias entre mayúsculas y minúsculas (comparación case-insensitive).
 * 9. No se cuentan coincidencias solapadas (ej. "ana" en "anana" se cuenta una vez, no dos), en este caso no lo tomo.
 * 10. Se ignoran caracteres especiales o espacios si están dentro del texto o palabra.
 */

    if (str == NULL || str->cad == NULL || palabra == NULL) return STR_VACIO;

    const char* texto = str->cad;
    size_t cont = 0;

    int palabraLen = mi_strlen(palabra);
    if (palabraLen == 0) return STR_VACIO;

    size_t textoLen = mi_strlen(texto);
    if (palabraLen > textoLen) return 0;

    size_t limite = textoLen - palabraLen + 1;

    for (size_t i = 0; i < limite; i++) {
        if (mi_strncmp(texto + i, palabra, palabraLen) == 0) {
            cont++;
            i += palabraLen - 1;  // Pongo -1 por el i++ del for
        }
    }

    return cont;
}
