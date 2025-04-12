/*
**    Função: Verificar números felizes até n
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Número feliz: processo de somar quadrados dos dígitos eventualmente chega a 1.
**    - Exemplo: 19 → 82 → 68 → 100 → 1.
*/
#include <stdio.h>
#include <stdbool.h>

bool eh_feliz(int n) {
    int visitados[1000] = {0}; // Evita ciclos infinitos
    while (n != 1 && !visitados[n]) {
        visitados[n] = 1;
        int soma = 0;
        while (n > 0) {
            int digito = n % 10;
            soma += digito * digito;
            n /= 10;
        }
        n = soma;
    }
    return n == 1;
}

int main() {
    int n;
    printf("Digite um limite n: ");
    scanf("%d", &n);
    printf("Números felizes até %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (eh_feliz(i)) printf("%d\n", i);
    }
    return 0;
}