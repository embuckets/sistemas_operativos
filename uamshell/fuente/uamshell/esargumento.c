#include "uamashell.h"

bool esarguento(char c)
{
    //verifica si el argumento de entrada es un caracter especial
    char *trabajo;
    char especial[] = {' ', '\t', '&', ';', '\n', '\0', '|'};
    for (trabajo = especial; *trabajo; *trabajo++)
        if (c == *trabajo)
            return (FALSO);
    return (CIERTO);
}