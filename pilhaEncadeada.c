///Descomentar para rodar

// #include <stdio.h>
// #include <stdlib.h>
//
// typedef struct Node{
//     int valor;
//     struct Node *proximo;
// }Node;
//
// typedef struct{
//     Node *topo;
// }Pilha;
//
// //Inicializando a pilha:
// void inicializarPilha(Pilha *pilha){
//     pilha->topo = NULL;
// }
//
// //Verificando se a pilha está vazia:
// int pilhaVazia(Pilha *pilha){
//     return (pilha->topo == NULL);
// }
//
// //Push:
// void empilhar(Pilha *pilha, int valor){
//     Node *novoNode = (Node *)malloc(sizeof(Node));
//     if (!novoNode){
//         printf("Erro ao alocar memória.\n");
//         return;
//     }
//     novoNode->valor = valor;
//     novoNode->proximo = pilha->topo;
//     pilha->topo = novoNode;
//     printf("Empilhado: %d\n", valor);
// }
//
// //Pop:
// int desempilhar(Pilha *pilha){
//     if (pilhaVazia(pilha)){
//         printf("A pilha está vazia\n");
//         return -1;
//     } else {
//         Node *temp = pilha->topo;
//         int valor = temp->valor;
//         pilha->topo = temp->proximo;
//         free(temp);
//         return valor;
//     }
// }
//
// //Consultar o topo:
// int consultarTopo(Pilha *pilha){
//     if(pilhaVazia(pilha)){
//         printf("A pilha está vazia\n");
//         return -1;
//     } else {
//         return pilha->topo->valor;
//     }
// }
//
// int main(){
//     Pilha pilha;
//     inicializarPilha(&pilha);
//
//     empilhar(&pilha, 10);
//     empilhar(&pilha, 20);
//     empilhar(&pilha, 30);
//
//     printf("Topo: %d\n", consultarTopo(&pilha));
//
//     desempilhar(&pilha);
//     printf("Topo após desempilhar:%d\n", consultarTopo(&pilha));
//
//     return 0;
// }
