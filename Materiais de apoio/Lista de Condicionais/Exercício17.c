#include<stdio.h>

int main(){

    int anosTrabalhados, idade;
    
    printf("Digite o número de anos trabalhados: ");
    scanf("%d",&anosTrabalhados);
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    if(idade >= 65 || anosTrabalhados >= 30 || idade >= 60 && anosTrabalhados >= 25)
        printf("Pode se aposentar!\n");
    else{
        printf("Não pode se aposentar!\n");
    }
    return 0; 
}
