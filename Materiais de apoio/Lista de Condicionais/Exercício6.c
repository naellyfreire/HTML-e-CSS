#include<stdio.h>

float main(){

//Calcular a media de 3 números se estiverem no intervalo de 0 a 10.

float nota1, nota2, nota3, media;

    printf("Digite sua primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite sua segunda nota:\n");
    scanf("%f",&nota2);
    printf("Digite sua terceira nota:\n");
    scanf("%f",&nota3);
    
    if(nota1 >= 0 && nota1<= 10 && nota2 >= 0 && nota2<= 10 && nota3 >= 0 && nota3<= 10){
        media = (nota1+nota2+nota3)/3;
        printf("A média das suas notas é igual a: %.2f\n",media); 
    }else{
        printf("Nota inválida\n");
    }   
    
   return 0;

}
