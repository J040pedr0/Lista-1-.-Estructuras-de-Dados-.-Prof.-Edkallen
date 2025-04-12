/*
**    Função: Encontrar pares de números amigáveis até n
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Dois números são amigáveis se a soma dos divisores próprios de um é igual ao outro.
**    - Exemplo clássico: 220 e 284.
*/
#include <stdio.h>

int soma_divisores(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) soma += i;
    }
    return soma;
}

void verifica_amigaveis(int n) {
    for (int a = 2; a <= n; a++) {
        int b = soma_divisores(a);
        if (b > a && soma_divisores(b) == a) {
            printf("%d e %d são amigáveis\n", a, b);
        }
    }
}

int main() {
    int n;
    printf("Digite um limite n: ");
    scanf("%d", &n);
    verifica_amigaveis(n);
    return 0;
}