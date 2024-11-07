///Descomentar para rodar
//
// #include <stdio.h>
// #define MAX 5
//
// typedef struct {
//     int itens[MAX];
//     int topo;
// }Pilha;
//
// //Inicializa a pilha:
// void inicializarPilha(Pilha *pilha){
//     pilha->topo= -1;
// }
// //Verifica se a pilha está Vazia:
// int pilhaVazia(Pilha *pilha) {
//     return (pilha->topo == -1);
// }
//
// //Verifica se a pilha está Cheia:
// int pilhaCheia(Pilha *pilha) {
//     return (pilha->topo == MAX -1);
// }
//
// //Push:
// void empilhar(Pilha *pilha,  int valor) {
//     if (pilhaCheia(pilha)) {
//         printf("Pilha cheia!\n");
//     } else {
//         pilha->topo++;
//         pilha->itens[pilha->topo] = valor;
//         printf("Empilhado: %d\n", valor);
//     }
// }
//
// //Pop:
// int desempilhar(Pilha *pilha) {
//     if (pilhaVazia(pilha)) {
//         printf("Pilha vazia!\n");
//         return -1;
//     } else {
//         int valor = pilha->itens[pilha->topo];
//         pilha->topo--;
//         return valor;
//     }
// }
//
// //Consulta o topo:
// int consultaTopo(Pilha *pilha) {
//    if (pilhaVazia(pilha)) {
//        printf("Pilha Vazia!\n");
//        return -1;
//    } else {
//        return pilha->itens[pilha->topo];
//    }
// }
//
// int main() {
//     Pilha pilha;
//     inicializarPilha(&pilha);
//
//     empilhar(&pilha, 10);
//     empilhar(&pilha, 20);
//     empilhar(&pilha, 30);
//
//     printf("Topo: %d\n", consultaTopo(&pilha));
//
//     desempilhar(&pilha);
//
//     printf("Topo após desempilhar: %d\n", consultaTopo(&pilha));
//
//     return 0;
// }