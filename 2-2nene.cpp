// info .h
//                                  //De que sirve ifndej???
# ifndef _INFO_H
#include "2-2.h"
#include "2-2nene.h"
# define _INFO_H

struct rep_info
{
    unsigned int nat;
    double real;
};

/* Operaciones de TInfo */              //Que es eso???

/*
Devuelve un 'TInfo ' compuesto por 'natural ' y 'real '.
*/
TInfo crearNene (unsigned int natural , double real ) {
    TInfo i = new rep_info;
    (*i).nat = natural;
    (*i).real = real;
    return i;
}


unsigned int edadNene ( TInfo info ) {
    return (*info).nat;
}

/*
Devuelve el componente real de 'info '.
*/
double alturaNene ( TInfo info ) {
    return info->real;
}
# endif