#include <stdio.h>
#include <stdlib.h>
#include "../TDAStrings/Strings.h"
int main()
{
    String s1;
    String s2;
    String s3;
    char str[]="BUS bUs." ;
    char str2[]="El bus llegó, el bus partió, vi otro bus, ¡busqué el bus, y ahí estaba!";
    char str3[]="Caminé al trabajo, llovía fuerte, nadie hablaba, solo silencio.";
    char palabra[]="";
    stringInicializar(&s1);
    stringInicializar(&s2);
    stringInicializar(&s3);
    stringEscribir(&s1, str);
    stringEscribir(&s2, str2);
    stringEscribir(&s3, str3);
    int res = stringContarApariciones(&s1, palabra);
    int res2 = stringContarApariciones(&s2, palabra);
    int res3 = stringContarApariciones(&s3, palabra);
    printf("cant de veces en s1: %d\n", res);
    printf("cant de veces en s2: %d\n", res2);
    printf("cant de veces en s3 %d\n", res3);
    stringATitulo(&s1);
    stringMostrar(&s1);
    //////////////////////////////////////////////////////////



return 0;

}
