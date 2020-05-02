#include <stdio.h>
#include <stdlib.h>
#include "lista/lista.h"

int main(){

    /**
     * Este arquivo é somente para testes, NÃO FAZ PARTE DA IMPLEMENTAÇÃO
    */

   //Criando e alocando a lista;
    Lista *Li = cria_lista();

    //Criando dados para colocar na lista
    Dado d1 = {"Joao", 42};
    Dado d2 = {"Maria", 14};
    Dado d3 = {"jose", 44};
    Dado d4 = {"Pedro Henrique", 20};
    Dado d5 = {"Eric", 14};

    //Testes de inserção
    //Inserindo na lista e mostrando o tamanho após cada inserção
    //Inserindo no final
    printf("Insercoes\n%d\n", tamanho_lista(Li));
    insere_lista_final(Li, d1);
    printf("%d\n", tamanho_lista(Li));
    insere_lista_final(Li, d2);
    printf("%d\n", tamanho_lista(Li));
    insere_lista_final(Li, d3);
    printf("%d\n", tamanho_lista(Li));
    //Inserindo de forma ordenada, da menor idade para a maior
    insere_lista_ordenada(Li, d4);
    printf("%d\n", tamanho_lista(Li));
    //Inserindo no inicio
    insere_lista_inicio(Li, d5);
    printf("%d\n", tamanho_lista(Li));
 
    //mostrando a lista na tela
    print_lista(Li);

    //Testes de remoção
    //Removendo Pedro Henrique
    printf("\n\nRemocao\n");
    remove_lista(Li, "Pedro Henrique");
    print_lista(Li);
    //Removendo no final
    remove_final_lista(Li);
    print_lista(Li);
    //Removendo no início
    remove_inicio_lista(Li);
    print_lista(Li);


    //Testes de consulta
    Dado dTeste;
    consulta_pos(Li, 2, &dTeste);
    printf("Consulta pela posicao 2:\nNome: %s\nIdade: %d\n", dTeste.nome, dTeste.idade);
    consulta(Li, "Joao", &dTeste);
    printf("Consulta pelo nome 'Jose':\nNome: %s\nIdade: %d\n", dTeste.nome, dTeste.idade);

    return 0;
}