/*
**    Função: Calcular potências fatoriais crescentes e decrescentes
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Implementa as potências fatoriais x^(n) (crescente) e x_(n) (decrescente).
**    - Gera tabelas com x fixo e n variável, e vice-versa.
*/
#include <stdio.h>

int potencia_fatorial_crescente(int x, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x + i);
    }
    return resultado;
}

int potencia_fatorial_decrescente(int x, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x - i);
    }
    return resultado;
}

int main() {
    printf("Tabela com x=5, n variando de 2 a 10:\n");
    printf("n\t5^(n)\t5_(n)\n");
    for (int n = 2; n <= 10; n++) {
        printf("%d\t%d\t%d\n", n, 
               potencia_fatorial_crescente(5, n),
               potencia_fatorial_decrescente(5, n));
    }
    return 0;
}