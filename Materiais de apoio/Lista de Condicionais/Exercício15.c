#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a, b, c, x1, x2, delta;

    printf("Digite um valor para a: ");
    scanf("%f",&a);
    printf("Digite um valor para b: ");
    scanf("%f",&b);
    printf("Digite um valor para c: ");
    scanf("%f",&c);

    if(a == 0){
        printf("Não é equação de 2º grau.\n");
    }else if (a != 0){
        delta = b*b - 4*a*c;
        if(delta < 0){
            printf("Não existe raiz real\n");
        }else if(delta == 0){
            x1 = (-b/(2*a));
            printf("A raiz real é igual a %.2f\n", x1);
            printf("Raiz única!\n");
        }else if(delta > 0){
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf(" As raizes da equacao sao iguais a %.2f e %.2f\n",x1,x2);
        }
    }
     system("pause");
     return 0;
}


