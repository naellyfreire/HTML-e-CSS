#include<stdio.h>

int main(){

    float a, b, c;
    
    printf("Digite um valor para a do triângulo: ");
    scanf("%f",&a);
    printf("Digite um valor para b do triângulo: ");
    scanf("%f",&b);
    printf("Digite um valor para c do triângulo: ");
    scanf("%f",&c);
    
    if(b-c < a < b + c && a-c < b < a + c && a-b < c < a + b){
        if( a == b && a == c && b == c){
            printf("É um triângulo equilátero!\n");
        }else if(a == b || a == c || c == b){
            printf("É um triângulo isósceles!\n");
        }else if(a != b && a != c && b != c){
            printf("É um triângulo escaleno!\n");
        }    
    }else{
        printf("Não é um triângulo!\n");
    }
   
    return 0;
}
