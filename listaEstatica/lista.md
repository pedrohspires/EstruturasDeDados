## Lista Sequêncial Estática
Autor: Pedro Henrique S. Pires <br/>
Email: pedropires2603@gmail.com <br/><br/>

### Breve descrição:
As listas estáticas são caracterizadas por terem um vetor de dados, sejam eles primitivos
ou estruturados, e um valor inteiro que informa a quantidade de elementos válidos que estão na lista. <br/><br>

### Funções de uma lista:
#### Criar a lista
A função para criar uma lista faz a alocação de memória no tamanho da estrutura.<br/>
Retorna uma lista alocada.
#### Liberar a lista
Liberar a lista é simplesmente desalocar o espaço de memória.<br/>
Sem retorno.
#### Verificações
Existem duas verificações essenciais em uma lista estática: se está vazia ou cheia.
Retornam inteiros, onde 0 (zero) é falso e 1 é veradeiro
#### Inserções
Existem três tipos de inserção na lista: no início, fim e de forma ordenada. Esta última exige
uma verificação que pode ser efetuada em um dado específico da lista e a lista necessáriamente tem que está ordenada.<br/>
Retornam a lista modificada
#### Remoções
Existem também três tipos de remoções em uma lista, semelhante às inserções: no início, no fim e de um dado específico.<br/>
Retornam a lista ordenada.<br/>

### Mais detalhes dentro da pasta "lista", no arquivo "implementaçãoLista.md".