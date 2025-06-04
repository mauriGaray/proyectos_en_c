#include "TDAPalabra.h"

void palabraInicializar(Palabra*str){
    char*p= str->cad;
    *p='\0';
}


int palabraEscribir(Palabra* str, char*palabra){
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
}


void palabraMostrar(const Palabra* str){
     if(str == NULL) {
        puts("(null)");
        return;
    }
    puts(str->cad);
}


bool esPalindromo(const Palabra* str){
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
} //1.6


int palabraANumero(const Palabra*str){
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
    }//1.7


void palabraATitulo(Palabra*str){
    char*palabra= str->cad;
    *palabra = mi_toUpper(*palabra);
        palabra++;
        while(*palabra){
        *palabra = mi_tolower(*palabra);
            palabra++;
    }
}
