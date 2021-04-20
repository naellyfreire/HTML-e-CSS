#include<stdio.h>

int main(){

// Programa para saber qual é o maior número ou se eles são iguais

    int primeiroNumero, segundoNumero;

    printf("Entre com o primeiro número:");
    scanf("%d",&primeiroNumero);

    printf("Entre com o segundo número:");
    scanf("%d",&segundoNumero);

    if(primeiroNumero>segundoNumero){
        printf("%d é o maior número\n",primeiroNumero);
    }
    if(segundoNumero>primeiroNumero){
        printf("%d é o maior número\n",segundoNumero);
    }
    if(primeiroNumero == segundoNumero){
        printf("Os números são iguais\n");
    }
    
    return 0;
}
