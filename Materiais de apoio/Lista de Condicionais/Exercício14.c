#include<stdio.h>

int main(){

    int numero;
    
    printf("Digite um número:\n");
    scanf("%d",&numero);
    
    printf("\e[H\e[2J");
    
    if(numero == 1){
        printf("Bom Dia - Boa Tarde - Boa Noite\n\n");
    }else if(numero == 2){
        printf("Por Favoe :) - Com Licença :D - Muito Obrigada ;)\n\n");
    }else if(numero == 3 ){
        printf("Por Gentileza - Você poderia - Desculpe\n\n"); 
    }else if(numero == 4){
        printf("Bom Sorte - Tenha Fé\n\n");
    }else{
        printf("Estudar vale muito a pena não é!?\n\n");
    }
    
    return 0;
}
