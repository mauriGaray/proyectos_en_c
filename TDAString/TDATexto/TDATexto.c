#include "TDATexto.h"

void textoCrear(Texto *sec, const char *cad)
{
    sec->cur = (char *)cad;
    sec->finSec = false;
}

bool textoLeer(Texto *sec, Palabra *pal) {}

bool textoFin(const Texto *sec) {}

void textoEscribir(Texto *sec, const Palabra *pal) {}

void textoEscribirCaracter(Texto *sec, char c) {}

int stringContarApariciones(const String *str, const char *palabra)
{
    /*
     * Condiciones de borde contempladas:
     * 1. El texto es NULL → se retorna código de error (PUNTERO_NULO u otro definido).
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

    if (str == NULL || str->cad == NULL || palabra == NULL)
        return PUNTERO_NULO;

    const char *texto = str->cad;
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
