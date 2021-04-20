#include<stdio.h>

int main(){

// Codígo que recebe 4 números inteiros e calcula a soma dos números pares.

    int soma=0, valor=0,auxiliar;
        
    for(auxiliar=0;auxiliar<4;auxiliar ++){
        printf("Digite um número inteiro:");
        scanf("%d",&valor);
        
        if(valor%2==0){
            soma += valor;
        }
    }
    printf("A soma é igual a:%d\n",soma);
    return 0;
}

