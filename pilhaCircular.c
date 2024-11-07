// /*-> Descomentar para rodar: */
//
// #include <stdio.h>
// #define MAX 5
//
// typedef struct {
//     int itens[MAX];
//     int topo;
// }pilhaCircular;
//
// //Inicializando a pilha:
// void inicializaPilha(pilhaCircular *pilha) {
//     pilha->topo = -1;
// }
//
// //Verifica se a pilha está cheia:
// int pilhaCheia(pilhaCircular *pilha) {
//     return ((pilha->topo + 1) % MAX == 0 &&
//             pilha->topo != -1);
// }
//
// //Verifica se a pilha está vazia:
// int pilhaVazia(pilhaCircular *pilha) {
//     return (pilha->topo == -1);
// }
//
// //Empilhar:
// void empilhar(pilhaCircular *pilha, int valor) {
//     if (pilhaCheia(pilha)) {
//         printf("Pilha cheia!\n");
//     } else {
//         pilha->topo = (pilha->topo + 1) % MAX;
//         pilha->itens[pilha->topo] = valor;
//         printf("Empilhado: %d\n", valor);
//     }
// }
//
// //Desempilhar:
// int desempilhar(pilhaCircular *pilha) {
//     if (pilhaVazia(pilha)) {
//         printf("Pilha vazia!\n");
//         return -1;
//     } else {
//         int valor = pilha->itens[pilha->topo];
//
//         pilha->itens[pilha->topo] = -1;
//         pilha->topo = (pilha->topo -1 + MAX) % MAX;
//         return valor;
//     }
// }
//
// //Cosulta topo:
// int consultaTopo(pilhaCircular *pilha) {
//     if (pilhaVazia(pilha)) {
//         printf("Pilha vazia!\n");
//         return -1;
//     } else {
//         return pilha->itens[pilha->topo];
//     }
// }
//
// int main() {
//     pilhaCircular pilha;
//     inicializaPilha(&pilha);
//
//     empilhar(&pilha, 10);
//     empilhar(&pilha, 20);
//     empilhar(&pilha, 30);
//
//     printf("Topo da pilha: %d\n", consultaTopo(&pilha));
//
//     desempilhar(&pilha);
//
//     printf("Topo após desempilhar: %d\n", consultaTopo(&pilha));
//     return 0;
// }