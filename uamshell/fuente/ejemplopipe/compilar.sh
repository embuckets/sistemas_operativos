#!/bin/sh
#shell Script de compilacion de listarrec
 
ACTUAL=$PWD
cd ../../bin
BIN=`pwd`
cd $ACTUAL
cd ../incl
INCL=`pwd`
cd $ACTUAL
make $* RUTA_BIN=$BIN/ RUTA_INCL=$INCL/