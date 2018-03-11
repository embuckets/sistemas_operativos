#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>

enum tokens{EOL=1,ARG,AMPERSAND,PUNTOYCOMA};
#define MAXARG 512
#define MAXBUF 512
enum plano{PRIMERPLANO,SEGUNDOPLANO};
typedef enum {FALSO,CIERTO} bool;
bool esarguento(char);
int sistema(char **,int);
void procesalinea(char *);
int dametoken(char **,char *,char*,char **,char **);
int leerlinea(char *,char *);

