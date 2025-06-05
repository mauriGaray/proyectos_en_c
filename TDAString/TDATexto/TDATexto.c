#include "TDATexto.h"

void textoCrear(Texto *sec, const char *cad)
{
    sec->cur = (char *)cad;
    sec->finSec = false;
}

bool textoLeer(Texto *sec, Palabra *pal) {
    while(*sec->cur && !esLetra(*sec->cur)) // *sec->cur != '\0'
    {
        sec->cur++;
    }

    if(!*sec->cur) //*sec->cur == '\0'
    {
        sec->finSec = true;
        return false;
    }

    char* iPal = pal->cad;
    do
    {
        *iPal = *sec->cur;
        iPal++;
        sec->cur++;
    }
    while(*sec->cur && esLetra(*sec->cur));

    *iPal = '\0';

    return true;
}

bool textoFin(const Texto *sec) {
    return sec->finSec;
}

void textoEscribir(Texto *sec, const Palabra *pal) {

    const char* iPal = pal->cad;
    while(*iPal)
    {
        *sec->cur = *iPal;
        iPal++;
        sec->cur++;
    }}

void textoEscribirCaracter(Texto *sec, char c) {
     *sec->cur = c;
    sec->cur++;
}

void textoCerrar(Texto* sec)
{
    *sec->cur = '\0';
}

int textoContarApariciones(const Texto* str, const char *palabra)
{
    if (str == NULL || str->cur == NULL || palabra == NULL)
        return PUNTERO_NULO;

    const char *texto = str->cur;
    size_t cont = 0;

    int palabraLen = mi_strlen(palabra);
    if (palabraLen == 0)
        return PALABRA_VACIA;

    size_t textoLen = mi_strlen(texto);
    if (palabraLen > textoLen)
        return 0;

    size_t limite = textoLen - palabraLen + 1;

    for (size_t i = 0; i < limite; i++)
    {
        if (mi_strncmp(texto + i, palabra, palabraLen) == 0)
        {
            cont++;
            i += palabraLen - 1; // Pongo -1 por el i++ del for
        }
    }

    return cont;
}


/*char* normalizar(char* cadDest, const char* cadOrig)
{
    Texto secL;
    textoCrear(&secL, cadOrig);

    Texto secE;
    textoCrear(&secE, cadDest);

    Palabra pal;

    textoLeer(&secL, &pal);
    while(!textoFin(&secL))
    {
        palabraATitulo(&pal);
        textoEscribir(&secE, &pal);

        if(textoLeer(&secL, &pal))
        {
            textoEscribirCaracter(&secE, ' ');
        }
    }

    textoCerrar(&secE);

    return cadDest;
}
*/
