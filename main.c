#include <stdio.h>
#define MAX 5

typedef struct {
    int itens[MAX];
    int inicio, fim;
} Fila;

// -> inicializando a fila:
void inicializarFila(Fila *fila) {
    fila->inicio = -1;
    fila->fim = -1;
}

// -> Verificando se a fila está vazia:
int filaVazia(Fila *fila) {
    return (fila->inicio == -1);
}

// -> Verificando se a fila está cheia:
int filaCheia(Fila *fila) {
    return (fila->fim == MAX -1);
}

// -> Enfileirando:
void enfilar(Fila *fila, int valor) {
    if (filaCheia(fila)) {
        printf("Fila cheia!\n");
    } else {
        if (fila->inicio == -1) {
            fila->inicio = 0;
        }
        fila->fim++;
        fila->itens[fila->fim] = valor;
        printf("Valor enfileirado: %d\n", valor);
    }
}

// -> Desenfileirando:
int desenfileirar(Fila *fila) {
    int valor;
    if (filaVazia(fila)) {
        printf("A fila já está vazia!\n");
        return -1;
    } else {
        valor = fila->itens[fila->inicio];
        fila->inicio++;
        if (fila->inicio > fila->fim) {
            fila->inicio = fila->fim = -1; // -> Reseta a fila.
        }
        return valor;
    }
}

// -> Consultando o início da fila:
int consultaInicio(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila está vazia!\n");
        return -1;
    } else {
        return fila->itens[fila->inicio];
    }
}

int main() {
    Fila fila;
    inicializarFila(&fila);

    enfilar(&fila, 10);
    enfilar(&fila, 20);
}