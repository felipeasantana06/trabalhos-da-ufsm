#include <stdio.h>

#define TAM 10 // assim que se define uma variavel constante

int main() {
    int D[TAM];
    int i, novo_tamanho = 0;

    // Leitura dos elementos
    printf("Digite os %d elementos:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &D[i]);
    }

    // Remoção dos valores nulos ou negativos
    for (i = 0; i < TAM; i++) {
        if (D[i] > 0) { // Aplica a logica inversa para "salvar" apenas os positivos
            D[novo_tamanho] = D[i];
            novo_tamanho++;
        }
    }

    printf("Vetor após remover nulos e negativos:\n");
    if (novo_tamanho == 0) {
        printf("(vetor vazio)\n");
    } else {
        for (i = 0; i < novo_tamanho; i++) {
            printf("%d ", D[i]);
        }
        printf("\n");
    }

    return 0;
}