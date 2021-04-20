#include<stdio.h>

int main(){

// programa para saber se o número é par ou ímpar
    
     int num;
     
     printf("Digite um valor inteiro qualquer!\n");
     scanf("%d",&num);
     
     if(num%2==0){
        printf("%d é um número par!\n",num);
     }else{
        printf("%d é um número ímpar!\n",num);
     }

     return 0;

}

