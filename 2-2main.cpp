#include "2-2.h"
#include "2-2nene.h"
#include "stdio.h"
int main(){
    int n = 3;
    TInfo nene[n];
    nene[0] = crearNene(3, 67.1);         //No tengo que reservar memoria con new? Puedo simplemente igualar el puntero
    nene[1] = crearNene(5, 98.3);
    nene[2] = crearNene(7, 103.5);

    for (int i = 0; i < 3; i++)
    {
        printf("%d %f\n", edadNene(nene[i]), alturaNene(nene[i]));
    }
    
}