#include <stdio.h>
#include <stdlib.h>

#define ERRO -2

int g (int X);

int main() {
    system("cls");
    int N;
    printf("Digite um numero nao negativo: ");
    scanf("%d", &N);
    int Resposta = g(N);
    if (Resposta!=ERRO) printf("g(%d) = %d\n\n", N, Resposta);
    else printf("A funcao nao esta definida para o valor indicado!");
}

int g (int X) {
    if (X == 0) return (-1);
    else if (X > 0) return(4 * g(X - 1) + 6);
    else return (ERRO);
}








