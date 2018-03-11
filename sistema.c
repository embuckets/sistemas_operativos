#include "sistema.h"

int sistema(char *comando){
 pid_t pid;
 if((pid=fork())<0)	
    return(-1);
 if(!pid){ 
    execl("/bin/sh","sh","-c",comando,NULL);
    exit(errno);
 }
 /* Código del padre espera hasta que el hijo termine */
  wait(NULL);
  return(0);
}