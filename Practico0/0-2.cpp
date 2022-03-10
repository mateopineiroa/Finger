#include <stdio.h>

//Escriba un procedimiento que calcule e imprima en pantalla todos los números primos entre dos enteros positivos A y B cualesquiera.

bool esPrimo(int c){
    int i=2;
    bool primo = true;
    while (i !=c && primo == true)
    {
                                        // Esta variable existe en esPrimo
        if (c%i == 0)
        {
            primo = false;                  // Esta variable se puede modificar desde adentro pero contador no??
        }
        i=i+1;
        
    }
    return (primo);    
}
bool esPrimo2(int c){
    int i = 2;

    while (i <= c && c % i != 0)            // Y si quiero que vaya hasta sqrt(c)?
    {
        i+=1;
    }
    return(c == i);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++)
    {
        

        if (esPrimo2(i))
        {
            printf("--->%d\n",i);
        }
        
    }
    
}