#include<stdio.h>ss

int main(){

// Código para conceder empréstimo caso for menor que 20% do salário. 

    float salario, emprestimo;

    printf("Digite o valor do seu salário:\n");
    scanf("%f",&salario);
    printf("Digite o valor do empréstimo desejado:\n");
    scanf("%f", &emprestimo);
    
    if(emprestimo >= (salario * 20)/100){
        printf("Empréstimo não concedido!\n");
    }else{
        printf("Empréstimo concedido!\n");
    }
     return 0;
}
