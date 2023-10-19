#include <stdio.h>

int x,contador=0, numOriginal;

int main() {
    printf("Introduza um numero: ");
    scanf("%d", &x);
    numOriginal=x;

    while (x%2==0) { 
    x=x/2;
    contador =contador+1;
    
    } 
    printf("O numero %d e divisivel por 2: %d vezes", numOriginal,contador);
    
    return 0;
}