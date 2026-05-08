#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializa o gerador com o tempo atual
    srand(time(NULL));
    int i, j, A[5][5], aux=4;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            A[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d \t", A[i][j]);
        }printf("\n");
            }



            printf("\n");
            printf("\n");
    for (i = 0; i < 5; i++){
        for(j=0; j < aux; j++){
            printf("%d \t", A[i][j]);
        } aux--; 
        printf("\n");
    }
    return 0;
}
