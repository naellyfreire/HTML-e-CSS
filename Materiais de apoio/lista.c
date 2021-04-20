#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *prox;
}NO;

NO *inicio = NULL;
NO *fim = NULL;
int tam = 0;

void adicionar(int valor){

    NO *novo = malloc (sizeof(NO));
    novo->valor = valor;
    novo->prox = fim;
    fim = novo;
    tam++;
}

int remover(){
    
    if(tam > 0){
        NO *lixo = inicio;
        inicio = inicio->prox;
        free(lixo);
        tam--;    
    }else{
        printf("Lista esta vazia!");
        return -1;
    }
}

void imprimir(){
    NO* aux = fim;
    for(int i=0; i<tam; i++){
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
}

int main(){
    adicionar(1);
    adicionar(3);
    adicionar(5);
    adicionar(3);
    remover();
    adicionar(8);
    remover();
    remover();
    adicionar(7);
    imprimir();
    return 0;    
}

