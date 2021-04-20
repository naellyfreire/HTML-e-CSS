#include<stdio.h>

int main(){

//Código que recebe 3 número e mostra qual é o maior entre eles.

    int primeiroNumero, segundoNumero, terceiroNumero;

    printf("Entre com o primeiro número:");
    scanf("%d",&primeiroNumero);

    printf("Entre com o segundo número:");
    scanf("%d",&segundoNumero);
    
    printf("Entre com o terceiro número:");
    scanf("%d",&terceiroNumero);
    
    if(primeiroNumero>segundoNumero){
        printf("%d e o maior\n",primeiroNumero);
    }else if(segundoNumero>terceiroNumero){
        printf("%d e o maior\n",segundoNumero);
    }else{
        printf("%d e o maior\n",terceiroNumero);
    }
    return 0;
}
