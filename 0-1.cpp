#include <stdio.h>

int PromClase(int c1,int c2,int c3,int c4,int c5){
    int min = c1;

    if (c2<min)
    {
        min=c2;
    }
    if(c3<min)
        min=c3;
    if(c4<min)
        min=c4;
    if(c5<min)
        min=c5;
    int prom = (c1+c2+c3+c4+c5-min)/4;
    return prom;
}

int main(){
    int cal1,cal2,cal3,cal4, cal5;
    printf("Ingrese Calificaciones: \n");
    scanf("%d %d %d %d %d", &cal1, &cal2, &cal3, &cal4, &cal5);
    int prom = PromClase(cal1,cal2,cal3,cal4,cal5);
    printf("El promedio de las 4 mayores califiaciones es: %d\n", prom);
}