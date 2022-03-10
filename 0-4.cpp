#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool esPalindrome(char *frase){                //La entrada es el valor que tiene la casilla de memoria del punterofrase
        int inicio=0;
        int final = strlen(frase) -2;                   //Tiene largo 10 pero la ultima casilla es la numero 9. Con fgets, me cuenta un caracter de mas!!! Resto 2
        printf("%d\n",final);
    for (int i = 0; i <= (strlen(frase)-1)/2; i++)
    {
        if (  toupper(frase[inicio]) == toupper(frase[final]) ){
            printf("Inicio: %d y final: %d, i vale: %d, final/2 vale: %d\n", inicio, final, i, final/2);
            printf("Compare %c con %c\n", frase[inicio], frase[final]);
            inicio++;
            final--;
        }
        printf("%d %d\n", inicio, final);
    }
    return (inicio > final);
}

int main(){
    char * frase = new char[100];
    fgets(frase,100,stdin);                         //Me recibe un string de hasta 100 caracteres
    printf("%s\n",frase);
    
    if (esPalindrome((frase)))
    {
        printf("Es palindrome\n");
    } else
    {
        printf("No es palindrome\n");
    }
}