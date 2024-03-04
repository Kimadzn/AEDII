#include <stdio.h>

// Função para verificar se o array contém o elemento x
int contemElemento(int array[], int tamanho, int x) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == x) {
            return 1; // Retorna 1 se encontrar o elemento
        }
    }
    return 0; // Retorna 0 se não encontrar o elemento
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]); // Calcula o tamanho do array
    int x = 3;
    int contemX = contemElemento(array, tamanho, x);
    
    if (contemX) {
        printf("O array contém o elemento %d\n", x);
    } else {
        printf("O array não contém o elemento %d\n", x);
    }
    
    return 0;
}
