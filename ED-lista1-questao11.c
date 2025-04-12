/*
**    Função: Verificar permutação circular entre dois arrays
**    Autor: João Pedro Alexandre Alves (1F)
**    Data: 12/04/2025
**    Observações:
**    - Exemplo: [1,2,3,4] e [4,1,2,3] são permutações circulares.
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool eh_permutacao_circular(int* arr1, int* arr2, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        bool match = true;
        for (int j = 0; j < tamanho; j++) {
            if (arr1[j] != arr2[(i + j) % tamanho]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {4, 1, 2, 3};
    int tamanho = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", eh_permutacao_circular(arr1, arr2, tamanho));
    return 0;
}