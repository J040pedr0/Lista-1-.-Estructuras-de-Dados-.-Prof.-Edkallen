/*
**    Função: Gerar série de Fibonacci até um limite max
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Usa alocação dinâmica para armazenar a série.
**    - Termina com marcador -1.
*/
#include <stdio.h>
#include <stdlib.h>

int* fibonacci_max(int max) {
    int* fib = malloc(100 * sizeof(int));
    fib[0] = 0;
    fib[1] = 1;
    int i = 2;
    while (1) {
        fib[i] = fib[i-1] + fib[i-2];
        if (fib[i] > max) {
            fib[i] = -1;
            break;
        }
        i++;
    }
    return fib;
}

int main() {
    int max;
    printf("Digite o limite max: ");
    scanf("%d", &max);
    int* fib = fibonacci_max(max);
    for (int i = 0; fib[i] != -1; i++) {
        printf("%d ", fib[i]);
    }
    free(fib);
    return 0;
}