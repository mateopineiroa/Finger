#include <stdio.h>
#include <ctype.h>
#include <string.h>


void ascendente(char arreglo[]){
    for (int i = 0; i < strlen(arreglo); i++)
    {
        for (int j = i+1; j < (strlen(arreglo)); j++)
        {
                if (toupper(arreglo[j]) < toupper(arreglo[i])){
                    char aux = arreglo[i];
                    arreglo[i]=arreglo[j];
                    arreglo[j] = aux;
                }
        }   
    }
}

int main(){
    char arr[100];
    fgets(arr,100, stdin);
    //char arr[10] = {'a','b','s','g', 'b', 'c'};
    printf("%s\n",arr);
    ascendente(arr);
    printf("%s\n",arr);
}