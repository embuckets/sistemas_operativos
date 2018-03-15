#include "uamashell.h"

int main(int argc, char **argv)
{
    signal(SIGINT, SIG_IGN);
    signal(SIGQUIT, SIG_IGN);
    
    char *prompt;
    char bufferentrada[MAXBUF];
    if (argc > 2)
    {
        fprintf(stderr, "Uso:\n%s prompt\n", argv[0]);
        exit(-1);
    }
    prompt = (argc == 1) ? "UAM> " : argv[1];

    //leerlinea lee caracte por caracter hasta encontrar nueva linea
    //llenando bufferentrada
    while (leerlinea(prompt, bufferentrada) != EOF)
        procesalinea(bufferentrada);
    return (0);
}