#include "uamashell.h"
 
 void procesalinea(char *bufferentrada){
    char *arg[MAXARG+1];
    char buffertoken[2*MAXBUF];
    char *apuntador=bufferentrada;
    char *token=buffertoken;
    int tipotoken;
    int contador;
    int tipo;
    for(contador=0;;){
        /* Actuar conforme al tipo de tokenen */
        switch(tipotoken=dametoken(&arg[contador],bufferentrada,buffertoken,&apuntador,&token)) {
            case ARG:
                if(contador<MAXARG)
                contador++;
            break;
            case EOL:
            case PUNTOYCOMA:
            case AMPERSAND:
                tipo=(tipotoken==AMPERSAND)?
                PRIMERPLANO:SEGUNDOPLANO;
                if(contador){
                    arg[contador]=NULL;
                    sistema(arg,tipo);
                 }
                procesalinea.c
                if(tipotoken==EOL)
                return;
                contador=0;
            break;
        }
    }
 }
