#include<stdio.h>

int main(){

  int num1, num2, num3;   
  
  printf("Digite três números: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  
  // Existem 6 possiveis ordens para imprimir os numeros lidos
  
  if (num1 <= num2 && num2 <= num3){
      printf("A ordem crescente: %d %d %d\n", num1, num2, num3);
  }else if (num1 <= num3 && num3 <= num2){
      printf("A ordem crescente: %d %d %d\n", num1, num3, num2);
  }else if (num2 <= num1 && num1 <= num3){
      printf("A ordem crescente: %d %d %d\n", num2, num1, num3);
  }else if (num2 <= num3 && num3 <= num1) {
      printf("A ordem crescente: %d %d %d\n", num1, num3, num1);
  }else if (num3 <= num1 && num1 <= num2){
      printf("A ordem crescente: %d %d %d\n", num3, num1, num2);
  }else{ //n3 <= n2 && n2 < n1
      printf("A ordem crescente: %d %d %d\n", num3, num2, num1);
  }

  return 0;
}
