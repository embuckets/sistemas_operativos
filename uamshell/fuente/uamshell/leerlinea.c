#include "uamashell.h"

int leerlinea(char *prompt, char *bufferentrada)
{
    int caracter, contador;

    /* Mostrar prompt*/
    printf("%s ", prompt);
    for (contador = 0;;)
    {
        if ((caracter = getchar()) == EOF)
        {
            return (EOF);
        }
        if (contador < MAXBUF)
        {
            bufferentrada[contador++] = caracter;
        }
        if (caracter == '\n' && contador < MAXBUF)
        {
            bufferentrada[contador] = '\0';
            return (contador);
        }
        /* Si la linea es muy larga resetear */
        if (caracter == '\n')
        {
            printf("Shellcito: linea muy largaaaaaaaa\n");
            contador = 0;
            printf("%s ", prompt);
        }
    }
}
