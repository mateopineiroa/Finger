#include "1-1.h"
#include "stdio.h"
int main() {
    int n = 3;
    TFecha arrFecha[n];                             //Creo un arreglo de elementos TFecha. Es decir, arreglo de punteros a celda tipo rep_fecha
    arrFecha[0] = crearFecha(20,10,2022);
    arrFecha[1] = crearFecha(27,10,2022);
    arrFecha[2] = crearFecha(18,11,1992);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(comparar_fechas( arrFecha[j], arrFecha[i] )){
                TFecha aux = arrFecha[i];
                arrFecha[i] = arrFecha[j];
                arrFecha[j] = aux;
            }
        }
    }
    printf("%d/%d/%d\n", dia(arrFecha[0]), mes(arrFecha[0]), anio(arrFecha[0]));
    printf("%d/%d/%d\n", dia(arrFecha[1]), mes(arrFecha[1]), anio(arrFecha[1]));
    printf("%d/%d/%d\n", dia(arrFecha[2]), mes(arrFecha[2]), anio(arrFecha[2]));
}