# %W%
COMPILADOR=gcc
FUENTE = ejemplopipe3.c
OBJS=$(FUENTE:.c=.o)
HEADER=miinodo.h
PROG= $(RUTA_BIN)miinodo

CC: $(OBJS)
	$(COMPILADOR) $(OBJS) -o $(PROG)
	@- echo "Compilacion terminada"
LIMPIA:
	@- rm -f $(OBJS)
	@- echo "Borrado de objetos terminado"
BORRA:
	@- rm -f $(OBJS) $(PROG)
	@- echo "Borrado de archivos terminado"
.c.o:
	$(COMPILADOR) -c -I$(RUTA_INCL) $*.c -o $*.o
$(OBJS): $(RUTA_INCL)$(HEADER)