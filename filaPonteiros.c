/// -> Para rodar, descomente as linhas abaixo

// #include<stdio.h>
// #include<stdlib.h>
//
// typedef struct Node {
//     int valor;
//     struct Node *proximo;
// } Node;
//
// typedef struct {
//     Node *inicio;
//     Node *fim;
// }Fila;
//
// // -> Inicializando a fila:
// void inicializaFila(Fila *fila) {
//     fila->inicio = NULL;
//     fila->fim = NULL;
// }
// // -> Verificando se a fila está vazia:
// int filaVazia(Fila *fila){
//     return (fila->inicio == NULL);
// }
//
// // -> Enfileirar:
// void enfileirar(Fila *fila, int valor){
//     Node *novoNode = (Node *)malloc(sizeof(Node));
//     if(!novoNode) {
//         printf("Erro ao alocar memória para o novo nó.\n");
//         return;
//     }
//     novoNode->valor = valor;
//     novoNode->proximo = NULL;
//
//     if (filaVazia(fila)){
//         fila->inicio = novoNode;
//
//     } else {
//         fila->fim->proximo = novoNode;
//     }
//     fila->fim = novoNode;
//     printf("Valor %d enfileirado com sucesso.\n", valor);
// }
//
// // -> Desenfileirar:
// int desenfileirar(Fila *fila){
//     if(filaVazia(fila)){
//         printf("A fila está vazia.\n");
//         return -1;
//     }
//     int valor = fila->inicio->valor;
//     Node *temp = fila->inicio;
//     fila->inicio = fila->inicio->proximo;
//
//     if (fila->inicio == NULL){
//         fila->fim == NULL;
//     }
//     free(temp);
//     return valor;
// }
//
// // -> Consulta o início da fila:
// int consultaInicio(Fila *fila){
//     if(filaVazia(fila)){
//         printf("Fila vazia.\n");
//         return -1;
//     }
//     return fila->inicio->valor;
// }
//
// int main() {
//     Fila fila;
//     inicializaFila(&fila);
//
//     enfileirar(&fila, 10);
//     enfileirar(&fila, 20);
//     enfileirar(&fila, 30);
//
//     printf("Inicio da fila: %d\n", consultaInicio(&fila));
//
//     desenfileirar(&fila);
//     printf("Inicio da fila após desenfileirar: %d\n", consultaInicio(&fila));
//
//     return 0;
// }