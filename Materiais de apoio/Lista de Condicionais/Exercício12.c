#include<stdio.h>

int main(){

    int escolha;
        
    printf("Digite 1 para DOMINGO\n");
    printf("Digite 2 para SEGUNDA-FEIRA\n");
    printf("Digite 3 para TERÇA-FEIRA\n");
    printf("Digite 4 para QUARTA-FEIRA\n");
    printf("Digite 5 para QUINTA-FEIRA\n");
    printf("Digite 6 para SEXTA-FEIRA\n");
    printf("Digite 7 para SÁBADO\n");
      
    printf("Digite o número escolhida!\n");
    scanf("%d",&escolha);

    printf("\e[H\e[2J");
    
    switch(escolha){
        case 1:
        printf("DOMINGO\n\n");
        break;
        case 2:
        printf("SEGUNDA-FEIRA\n\n"); 
        break;
        case 3:
        printf("TERÇA-FEIRA\n\n");
        break; 
        case 4:
        printf("QUARTA-FEIRA\n\n");
        break;
        case 5:
        printf("QUINTA-FEIRA\n\n");
        break; 
        case 6:
        printf("SEXTA-FEIRA\n\n");
        break;
        case 7:
        printf("SÁBADO\n\n");
        break;
        default:
        printf("Escolha inválida!\n\n");
        break;
   
   }
    
    return 0;      
}
