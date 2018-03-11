# %W%
 COMPILADOR=gcc
 FUENTE = $(RUTA_UTIL)error.c
    sistema.c dametoken.c leerlinea.c
    procesalinea.c esargumento.c
    uamashell.c
OBJS=$(FUENTE:.c=.o)
 HEADER=uamashell.h
 PROG= $(RUTA_BIN)uamashell
CC: $(OBJS)
 $(COMPILADOR) $(OBJS) -lm -o
$(PROG)
 @- echo "Compilación terminada"
LIMPIA:
 @- rm -f $(OBJS)
 @- echo "Borrado de objetos
terminado"
BORRA:
 @- rm -f $(OBJS) $(PROG)
 @- echo "Borrado de archivos
terminado"
.c.o:
 $(COMPILADOR) -c -
I$(RUTA_INCL) $*.c -o $*.o
$(OBJS):
$(RUTA_INCL)$(HEADER)