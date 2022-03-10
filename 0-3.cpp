#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ocurrencias(char frase[], int largo, char letra){
    int ocur = 0;
    for (int i = 0; i < largo; i++)
    {
        if (toupper(frase[i]) == toupper(letra))
            ocur++;
    }
    return ocur;
}

int main(){
    char frase[100];             // Forma de inicializar un string de dos caracteres.
    //char frase1[] = "frase unoa";                // Forma de inicializar un string. Para la cantidad de funciones uso otra funcion?
    
    //int largo = 100;
    //char n = 'n';
    fgets(frase,100,stdin);                         //Me recibe un string de hasta 100 caracteres
    printf("%s\n",frase);
    int largo = strlen(frase);

    printf("%d\n",ocurrencias(frase,largo,'A'));
}