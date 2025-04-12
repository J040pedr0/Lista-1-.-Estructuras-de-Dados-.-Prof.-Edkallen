/*
**    Função: Encontrar números perfeitos até 100000
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Número perfeito: soma dos divisores próprios é igual ao número.
**    - Exemplos: 6, 28, 496, 8128.
*/
#include <stdio.h>

bool eh_perfeito(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) soma += i;
    }
    return soma == n;
}

int main() {
    printf("Números perfeitos até 100000:\n");
    for (int i = 1; i <= 100000; i++) {
        if (eh_perfeito(i)) printf("%d\n", i);
    }
    return 0;
}