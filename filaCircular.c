// -> Descomentar para rodar

// #include <stdio.h>
// #define MAX 5
//
// typedef struct {
//     int itens[MAX];
//     int inicio, fim;
// }Fila;
//
// // -> Inicializar fila:
// void inicializaFila(Fila *fila) {
//     fila->inicio = -1;
//     fila->fim =-1;
// }
//
// // -> Verificar se a fila está cheia:
//
// int filaCheia(Fila *fila) {
//     return ((fila->fim  + 1) % MAX == fila->inicio);
// }
//
// // -> Veridica se a fila está vazia:
// int filaVazia(Fila *fila) {
//     return (fila->inicio == -1);
// }
//
// // -> Enfileirando valores:
// void enfileirar(Fila *fila, int valor) {
//     if (filaCheia(fila)) {
//         printf("Fila cheia!\n");
//     } else {
//         if (filaVazia(fila)) {
//             fila->inicio = 0;
//         }
//         fila->fim = (fila->fim + 1) % MAX;
//         fila->itens[fila->fim] = valor;
//         printf("Enfileirado: %d\n", valor);
//     }
// }
//
// // -> Desenfileirando:
// int desenfileirar(Fila *fila) {
//     int valor;
//     if (filaVazia(fila)) {
//         printf("Fila vazia!\n");
//         return -1;
//     } else {
//         valor = fila->itens[fila->inicio];
//         if (fila->inicio == fila->fim) {
//             fila->inicio = fila->fim = -1;
//         } else {
//             fila->inicio = (fila->inicio + 1) % MAX;
//         }
//         return valor;
//     }
// }
//
// int main() {
//     Fila fila;
//
//     inicializaFila(&fila);
//
//     enfileirar(&fila, 10);
//     enfileirar(&fila, 20);
//     enfileirar(&fila, 30);
//
//     printf("Desenfileirado: %d\n", desenfileirar(&fila));
//
//     enfileirar(&fila, 40);
// }