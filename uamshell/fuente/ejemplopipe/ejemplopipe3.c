#include "ejemplopipe.h"

int main(void)
{
    char *mensaje1 = "Hola ";
    char *mensaje2 = "Mundo ";
    char *mensaje3 = "¿ Como ";
    char *mensaje4 = "taz ? ";
    char buffer[TAM];
    int p[2], contador;
    pid_t pid;

    if (pipe(p) < 0)
        error("Fallo el pipe");
    /* Crear Hijo */
    if ((pid = fork()) < 0)
        error("Fallo el fork");

    /* Escribir al pipe por el padre cerrando
pipe no usado*/
    if (pid > 0)
    {

        close(p[0]);
        write(p[1], mensaje1, TAM);
        write(p[1], mensaje2, TAM);
        write(p[1], mensaje3, TAM);
        write(p[1], mensaje4, TAM);
        wait(NULL);
    }

    /* Leer del pipe por el hijo cerrando pipe no
usado */
    if (!pid)
    {
        close(p[1]);
        for (contador = 0; contador < 4; contador++)
        {
            read(p[0], buffer, TAM);
            printf("%s ", buffer);
        }
        putchar('\n');
    }
    exit(0);
}