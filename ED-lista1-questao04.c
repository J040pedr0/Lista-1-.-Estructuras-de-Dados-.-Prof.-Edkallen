/*
**    Função: Verificar números automórficos até n
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Número automórfico: os últimos dígitos de n² são iguais a n.
**    - Exemplos CORRIGIDOS: 
**      5² = 25 (termina com 5) → automórfico
**      6² = 36 (termina com 6) → automórfico
**      25² = 625 (termina com 25) → automórfico
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool eh_automorfico(int n) {
    long long quadrado = (long long)n * n;  
    int digitos = 0;
    int temp = n;
    
    // Conta quantos dígitos tem n
    while (temp > 0) {
        digitos++;
        temp /= 10;
    }
    
    // Verifica se os últimos 'digitos' de quadrado são iguais a n
    return quadrado % (int)pow(10, digitos) == n;
}

int main() {
    int n;
    printf("Digite um limite n: ");
    scanf("%d", &n);
    
    printf("Números automórficos até %d:\n", n);
    for (int i = 1; i <= n; i++) {  // Começa de 1 para incluir 1 (1²=1)
        if (eh_automorfico(i)) {
            printf("%d (quadrado = %lld)\n", i, (long long)i * i);
        }
    }
    return 0;
}
