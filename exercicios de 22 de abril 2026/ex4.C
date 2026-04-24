#include <stdio.h>

int main()
{
    int n, p, v, x;

    printf("digite o tamanho do vetor \n");
    scanf("%d", &n);

    int i, vetor[n];

    printf("digite os valores do vetor \n");
    for (i = 0; i < (n - 1); i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("\n digite o valor especifico: \n");
    scanf("%d", &v);

    printf("\n digite a posição especifica: \n");
    scanf("%d", &p);

    for (x = n; x != p-1; x--)
    {
        vetor[x] = vetor[x - 1];
    }
    vetor[p - 1] = v;

    for (i = 0; i < n; i++)
    {
        printf("%d \t", vetor[i]);
    }

    return 0;
}