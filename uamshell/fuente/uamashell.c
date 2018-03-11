#include "uamashell.h"

int main(int argc,char **argv){
    char *prompt;
    char bufferentrada[MAXBUF];
    if(argc>2){
        fprintf(stderr,"Uso:\n%s prompt\n",argv[0]);
        exit(-1);
    }
    prompt=(argc==1)?"UAM> ":argv[1];

    while(leerlinea(prompt,bufferentrada)!=EOF)
        procesalinea(bufferentrada);
 return(0);
}