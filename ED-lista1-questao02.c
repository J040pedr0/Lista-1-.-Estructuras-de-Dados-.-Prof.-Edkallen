/*
**    Função: Calcular fatorial duplo e comparar com fatorial normal
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Calcula n!! (fatorial duplo) e n! (fatorial normal).
**    - Mostra tabela comparativa para n de 2 a 20.
*/
#include <stdio.h>

long long fatorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long long fatorial_duplo(int n) {
    long long resultado = 1;
    for (int i = n; i > 0; i -= 2) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    printf("n\tn!!\tn!\tDiferença\n");
    for (int n = 2; n <= 20; n++) {
        long long fd = fatorial_duplo(n);
        long long fn = fatorial(n);
        printf("%d\t%lld\t%lld\t%lld\n", n, fd, fn, fn - fd);
    }
    return 0;
}