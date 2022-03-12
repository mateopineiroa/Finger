// info .h
# ifndef _INFO_H
#include "2-2.h"            //Si lo pongo en alguna linea superior y guardo se me pone oscuro todo el texto????
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
TInfo crearInfo (unsigned int natural , double real ) {
    TInfo i = new rep_info;
    (*i).nat = natural;
    (*i).real = real;
    return i;
}


unsigned int natInfo ( TInfo info ) {
    return (*info).nat;
}

/*
Devuelve el componente real de 'info '.
*/
double realInfo ( TInfo info ) {
    return info->real;
}
# endif