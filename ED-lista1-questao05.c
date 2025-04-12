/*
**    Função: Calcular soma dos inversos dos fatoriais até n
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - S = 1/1! + 1/2! + ... + 1/n!
**    - Usa precisão double para resultados decimais.
*/
#include <stdio.h>

double soma_fatoriais_inversos(int n) {
    double soma = 0.0;
    long long fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
        soma += 1.0 / fatorial;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Soma: %.15lf\n", soma_fatoriais_inversos(n));
    return 0;
}