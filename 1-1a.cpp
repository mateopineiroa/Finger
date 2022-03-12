#include "1-1.h"
struct rep_fecha
{
    unsigned int d;
    unsigned int m;
    unsigned int a;
};

/* Devuelve un 'TFecha ' con dia d, mes m y año a */
TFecha crearFecha(unsigned int d, unsigned int m, unsigned int a) {
    TFecha fecha = new rep_fecha;           //TFecha es un puntero que va a una celda tipo rep_fecha. Por ende la memoria que reservo es rep_fecha
    fecha->d = d;                           //Equivalente a (*fecha).k = k;
    fecha->m = m;                           //Equivalente a (*fecha).k = k;
    fecha->a = a;                           //Equivalente a (*fecha).k = k;
    return fecha;
}             //Punto y coma???

/* Devuelve true si f1 es anterior a f2 , false en otro caso */
bool comparar_fechas ( TFecha f1 , TFecha f2 ){
    return f1->a < f2->a || ((f1->a == f2->a) && (f1->m < f2->m)) || ((f1->a == f2->a) && (f1->m == f2->m) && (f1->d < f2->d));
}


/* Devuelve el día correspondiente a fecha */
unsigned int dia ( TFecha fecha ) {
    return fecha->d;
}

/* Devuelve el mes correspondiente a fecha */
unsigned int mes ( TFecha fecha ) {

    return fecha->m;
}

/* Devuelve el año correspondiente a fecha */
unsigned int anio ( TFecha fecha ) {

    return fecha->a;
}

