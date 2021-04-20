#include<stdio.h>

int main(){

    float num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro valor:\n");
    scanf("%f",&num1);
    printf("Digite o segundo valor:\n");
    scanf("%f",&num2);
    
    printf("\e[H\e[2J");
    
    printf("Digite 1 para calular a média dos números.\n");
    printf("Digite 2 para calular a diferença do maior pelo menor.\n");
    printf("Digite 3 para calular o produto dos números.\n");
    printf("Digite 4 para calular a divisão do primeiro pelo segundo.\n");
    
    printf("Digite a opção escolhida!\n");
    scanf("%d",&opcao);
    
    if(opcao == 1){
        resultado = (num1 + num2)/2;
        printf("O resultado é igual a %.2f\n",resultado);
    }else if(opcao == 2 && num1 > num2){
        resultado = num1 - num2;
        printf("O resultado é igual a %.2f\n",resultado);
    }else if(opcao == 2 && num1 < num2){
        resultado = num2 - num1;
        printf("O resultado é igual a %.2f\n",resultado); 
    }else if(opcao == 3){
        resultado = num1 * num2;
        printf("O resultado é igual a %.2f\n",resultado);
    }else if(opcao == 4 && num2 != 0){
        resultado = num1/num2;
        printf("O resultado é igual a %.2f\n",resultado); 
    }else{
        printf("Opção inválida!\n");
    } 
    
    return 0;      
}
