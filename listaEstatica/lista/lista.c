#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

/**
 * A estrutura lista tem um campo inteiro para a quantidade e um vetor de dados
*/
struct lista_t{
    int qtd;
    Dado dados[MAX];
};

//Implementações
Lista *cria_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista)); 
    l->qtd=0;
    return l;
}

void libera_lista(Lista *L){
    free(L);
}

int tamanho_lista(Lista *L){
    return L->qtd;
}

int lista_cheia(Lista *L){
    return L->qtd == MAX;
}

int lista_vazia(Lista *L){
    return L->qtd == 0;
}

int insere_lista_final(Lista *L, Dado D){
    if(L != NULL && !lista_cheia(L)){
        L->dados[L->qtd]=D;
        L->qtd++;
        return 1;
    }
    return 0;
}

int insere_lista_inicio(Lista *L, Dado D){
    if(L != NULL && !lista_cheia(L)){
        int cont;
        for(cont=L->qtd; cont>0; cont--)
            L->dados[cont]=L->dados[cont-1];
        L->dados[cont]=D;
        L->qtd++;
        return 1;
    }
    return 0;
}

int insere_lista_ordenada(Lista *L, Dado D){
    if(L != NULL && !lista_cheia(L)){
        int cont=0;
        Lista *aux = L;
        while(cont<MAX && aux->dados[cont].idade > D.idade)
            cont++;
        if(cont==MAX)
            return 0;
        int i;
        for(i=L->qtd; i>cont; i--)
            aux->dados[i]=aux->dados[i-1];
        aux->dados[cont] = D;
        aux->qtd++;
        L=aux;
        return 1;
    }
    return 0;
}

int remove_final_lista(Lista *L){
    if(L != NULL && !lista_vazia(L)){
        L->qtd--;
        return 1;
    }
    return 0;
}

int remove_inicio_lista(Lista *L){
    if(L != NULL && !lista_vazia(L)){
        int cont;
        for(cont=0; cont<L->qtd-1; cont++)
            L->dados[cont] = L->dados[cont+1];
        L->qtd--;
        return 1;
    }
    return 0;
}

int remove_lista(Lista *L, char nome[]){
    if(L != NULL && !lista_vazia(L)){
        int cont=0;
        while(cont < L->qtd && strcmp(L->dados[cont].nome, nome))
            cont++;
        if(cont == L->qtd)
            return -1; //Caso o cont seja igual a qtd, significa que o campo não foi encontrado
        while(cont<L->qtd-1){
            L->dados[cont]=L->dados[cont+1];
            cont++;
        }
        L->qtd--;
        return 1;
    }
    return 0;
}


void print_lista(Lista *L){
    if(L != NULL && !lista_vazia(L)){
        int cont;
        for(cont=0; cont<L->qtd-1; cont++)
            printf("[%s, %d] -> ", L->dados[cont].nome, L->dados[cont].idade);
        printf("[%s, %d]\n", L->dados[cont].nome, L->dados[cont].idade);
    }
}