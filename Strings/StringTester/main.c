#include <stdio.h>
#include <stdlib.h>
#include "../TDAStrings/Strings.h"
int main()
{
    String s1;
    String s2;
    char str[]="abc";
    char str2[]="abdg";
    stringInicializar(&s1);
    stringInicializar(&s2);
    //////////////////////////////////////////////////////////

   stringEscribir(&s1,str);
   stringEscribir(&s1,str2);

   int res = mi_strncmp(str, str2, 5);


    printf("El numero es: %d", res);

return 0;

}
