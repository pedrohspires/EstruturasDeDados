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

/**
 * Para remover da lista no final, simplesmente diminuir o valor de qtd. Não é necessário alterar
 * o valor guardado na posição removida, pois ela não estará mais acessível ao programa.
 * Cuidados:
 * 1. A lista tem que está alocada;
 * 2. A lista não pode está vazia.
 * Retorna 1 para sucesso e 0 para erro.
*/
int remove_final_lista(Lista *L);

/**
 * Para remover no início da lista, é necessário realocar todos os dados posteriores uma posição
 * para trás.
 * Cuidados:
 * 1. A lista tem que está alocada;
 * 2. A lista não pode está vazia.
 * Retorna 1 para sucesso e 0 para erro.
*/
int remove_inicio_lista(Lista *L);

/**
 * Para remover um item específico, tem que ser passado algum dado para comparação.
 * Esta função deve ser modelada de acordo com o tipo de estrutura Dado que está sendo utilizado.
 * Nesse caso, utilizarei o campo Nome para buscar um campo específico.
 * Cuidados:
 * 1. A lista tem que está alocada;
 * 2. A lista não pode está vazia.
 * Retorna 1 para sucesso, 0 para erro ou -1 para dado não encontrado
*/
int remove_lista(Lista *L, char nome[]);

/**
 * Para consultar o Dado guardado em uma determinada posição, é necessário passar uma posição
 * e um endereço de memória (ponteiro *) para uma estrutura Dado que vai receber os dados guardados
 * na posição passada.
 * Cuidados:
 * 1. A lista tem que está alocada;
 * 2. A lista não pode ser vazia;
 * 3. A posição passada tem que ser válida (pos <= qtd)
 * Retorna 1 para dado existente, 0 para erro e -1 para não encontrado ou posição inválida
 * O dado da posição encontrada, se existir, é retornado pelo ponteiro *D
*/
int consulta_pos(Lista *L, int pos, Dado *D);

/**
 * Para consultar por algum dado específico da estrutura é necessária uma comparação em todas as posições
 * da lista.
 * Essa função deve ser modelada de acordo com os dados da estrutura Dado.
 * Nesse caso, irei procurar pelo campo nome da estrutura.
 * Cuidados:
 * 1. A lista tem que está alocada;
 * 2. A lista não pode está vazia.
 * Retorna 1 para dado encontrado, 0 para não encontrado.
 * O dado da posição encontrada, se existir, é retornado pelo ponteiro *D
*/
int consulta(Lista *L, char nome[], Dado *D);


//Funções não essenciais
//Mostra a lista
void print_lista(Lista *L);