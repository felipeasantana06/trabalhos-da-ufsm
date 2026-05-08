#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializa o gerador com o tempo atual
    srand(time(NULL));
    int i, j, k, y, A[5][5], B[5][5], C[5][5]={0};

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d \t", A[i][j]);
        } printf("\n");
    }

    printf("\n");
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d \t", B[i][j]);
        }printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                for (y = 0; y < 5; y++)
                {
                    if (A[i][j] == B[k][y]){
                        C[i][j]=1;
                    }
                }
            }
        }
    }


    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
        {
            printf("%d \t", C[i][j]);
        }   printf("\n");
    }

    return 0;
}