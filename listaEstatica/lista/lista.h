//Define o tamanho do vetor
//É feito desta maneira para facilitar modificações no tamanho do vetor, sem precisar modificar em toda a implementação
#define MAX 100

//Definição das estruturas
//Estrutura do dado
typedef struct {
    char nome[20];
    int idade;
} Dado;

//Estrutura lista
typedef struct lista_t Lista;

//Protótipos das funções

/**
 * Aloca memória para a estrutura lista
 * Retorna a lista alocada
*/
Lista *cria_lista();

/**
 * Desaloca a lista.
*/
void libera_lista(Lista *L);

/**
 * Retorna o campo qtd
*/
int tamanho_lista(Lista *L);

/**
 * Se o campo qtd for igual a MAX, retorna 1
 * Retorna 0 caso contrário
*/
int lista_cheia(Lista *L);

/**
 * Se o campo qtd for igual a 0, significa que a lista está vazia, retorna 1
 * Retorna 0 caso contrário
*/
int lista_vazia(Lista *L);

/**
 * Para inserir um dado no final, basta inserir na posição qtd
 * Algumas preocupações devem ser levadas em conta:
 * 1. A lista tem que está alocada;
 * 2. A lista não pode está cheia.
 * Retorna 1 se a inserção ocorreu bem e 0 se não
*/
int insere_lista_final(Lista *L, Dado D);

/**
 * Para inserir no início da lista, é necessário realocar todos os dados subsequentes uma posição para frente
 * Algumas preocupações devem ser tomadas
 * 1. A lista tem que está alocada;
 * 2. A lista não pode está cheia.
 * Retorna 1 se a inserção ocorreu bem e 0 se não
*/
int insere_lista_inicio(Lista *L, Dado D);

/**
 * Para inserir de forma ordenada, é necessário que a lista seja ordenada e que haja uma forma de comparar um campo da estrutura Dado
 * As preocupações devem ser:
 * 1. A lista tem que está alocada;
 * 2. A lista não pode está cheia.
 * Retorna 1 se a inserção ocorreu bem e 0 se não
*/
int insere_lista_ordenada(Lista *L, Dado D);


//Funções não essenciais
//Mostra a lista
void print_lista(Lista *L);