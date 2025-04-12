/*
**    Função: Verificar números de Armstrong entre 1 e 100
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Número de Armstrong: soma dos cubos dos dígitos é igual ao número.
**    - Exemplo: 153 = 1³ + 5³ + 3³.
*/
#include <stdio.h>
#include <math.h>

bool eh_armstrong(int n) {
    int original = n, soma = 0, digitos = (int)log10(n) + 1;
    while (n > 0) {
        int digito = n % 10;
        soma += pow(digito, digitos);
        n /= 10;
    }
    return soma == original;
}

int main() {
    printf("Números de Armstrong entre 1 e 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (eh_armstrong(i)) printf("%d\n", i);
    }
    return 0;
}