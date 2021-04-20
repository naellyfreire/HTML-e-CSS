#include<stdio.h>
#include <math.h>

int main(){

// Calcular a raiz quadrada do número digitado pelo usúario caso for positivo.  

    float numero, raizQuadrada;

    printf("Digite um número inteiro.\n");
    scanf("%.2f",&numero);
    
    if(numero>0){
        raizQuadrada = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f.\n",numero,raizQuadrada);
    }else if(numero<0){
        printf("Número inválido\n");
    }
 return 0;
   
}
