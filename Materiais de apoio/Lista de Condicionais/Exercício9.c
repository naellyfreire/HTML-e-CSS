#include<stdio.h>

int main(){

    int ratosGolpistas, roedores;

    printf("Digite a quantidade de ratos golpistas:\n");
    scanf("%d",&ratosGolpistas);
    printf("Digite a quantidade de roedores:\n");
    scanf("%d",&roedores);
    
    if(ratosGolpistas < 342){
        printf("Colocaram fogo na câmera dos DepuRatos e evitaram o golpe\n");
    }else if(ratosGolpistas >= 342 && roedores < 54){
        printf("Homens bombas explodiram o Senado Federal e evitaram o golpe\n");
    }else if(ratosGolpistas >= 342 && roedores >= 54){
        printf("Nem Goku, nem Naruto e muito menos os Vingadores. Tome golpe.\n");
    }
    return 0;
}
