#include<stdio.h>

int main(){

//Programa para verificar se um número é divisível por 3 ou por 5. 

    int numero;

    printf("Digite um número inteiro:\n");
    scanf("%d",&numero);
    
    
    if(numero % 3 == 0 && numero % 3 == 0){
        printf("O número é divisível por 3 e por 5.\n");
    }else if(numero % 3 == 0){
        printf("O número é divisível por 3.\n");  
    }else if(numero % 5 == 0){
        printf("O número é divisível por 5.\n");
    }else{
        printf("Não é divivel por nenhum dos dois\n");
    }     
}

