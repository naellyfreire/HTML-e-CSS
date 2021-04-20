#include<stdio.h>

int main(){

    float num1, num2, resultado;
    int opcao;
    
    printf("Digite o primeiro valor\n");
    scanf("%f",&num1);
    
    printf("\e[H\e[2J");
    
    printf("Digite 1 para soma.\n");
    printf("Digite 2 para subtração.\n");
    printf("Digite 3 para multiplicação.\n");
    printf("Digite 4 para divisão.\n\n");
   
    printf("Digite a opção escolhida!\n");
    scanf("%d",&opcao);
    
    printf("\e[H\e[2J");
    
    printf("Digite o segundo valor\n");
    scanf("%f",&num2);
    
    printf("\e[H\e[2J");
     
    if(opcao == 1){
        resultado = num1 + num2;
        printf("O resultado é igual a %.2f\n",resultado);
    }else if(opcao == 2){
        resultado = num1 - num2;
        printf("O resultado é igual a %.2f\n",resultado);
    }else if(opcao == 3){
        resultado = num1 * num2;
        printf("O resultado é igual a %.2f\n",resultado);
    }else if(opcao == 4){
        resultado = num1/num2;
        printf("O resultado é igual a %.2f\n",resultado); 
    }else{
        printf("Opção inválida!\n");
    } 
    
    return 0;      
}
