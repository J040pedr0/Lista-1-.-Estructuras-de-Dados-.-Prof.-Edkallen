/*  
**    Função: Verificar números de Carmichael até um limite n  
**    Autor: João Pedro Alexandre Alves (1F)  
**    Data: 12/04/2025  
**    Observações:  
**    - Implementa o teste de números de Carmichael usando congruência modular.  
**    - Números de Carmichael são compostos que satisfazem a^(n-1) ≡ 1 mod n para todo a coprimo com n.  
**    - Exemplo conhecido: 561.  
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Verifica se dois números são coprimos (MDC = 1)
bool sao_coprimos(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a == 1;
}

// Verifica se um número é primo
bool eh_primo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

// Calcula a^b mod m de forma eficiente (evita overflow)
long long potencia_modular(long long a, long long b, long long m) {
    long long resultado = 1;
    a = a % m;
    while (b > 0) {
        if (b % 2 == 1) {
            resultado = (resultado * a) % m;
        }
        b = b >> 1;
        a = (a * a) % m;
    }
    return resultado;
}

// Função principal: verifica se n é número de Carmichael
bool eh_numero_carmichael(int n) {
    // Números de Carmichael devem ser compostos
    if (eh_primo(n)) {
        return false;
    }

    // Testa a congruência para todos os a coprimos com n
    for (int a = 2; a < n; a++) {
        if (sao_coprimos(a, n)) {
            if (potencia_modular(a, n - 1, n) != 1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);

    printf("Números de Carmichael de 2 até %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (eh_numero_carmichael(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}