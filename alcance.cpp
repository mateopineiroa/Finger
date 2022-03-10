#include <stdio.h>

int main(){
                                // Pruebas de alcance de c++
    int b=1;
    int a=2;
    while(a!=3){
    printf("Entra una vez\n");
    a+=1;
    b=b+1;            //Esta variable existe dentro del while
    }
    printf("%d\n",b);
}