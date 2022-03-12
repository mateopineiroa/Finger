// info .h
#include "2-2.h"

/* Representación de TInfo */
typedef struct rep_info * TInfo ;

/* Operaciones de TInfo */

/*
Devuelve un 'TInfo ' compuesto por 'natural ' y 'real '.
*/
TInfo crearNene (unsigned int natural , double real ) ;

/*
Devuelve el componente natural de 'info '.
*/
unsigned int edadNene ( TInfo info ) ;

/*
Devuelve el componente real de 'info '.
*/
double alturaNene ( TInfo info ) ;
