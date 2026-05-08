#include <stdio.h>

void imprimi(int A[2][3])
{
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j] % 2 == 0)
            {
                printf("%d \t", A[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int i, j, A[2][3] = {0};

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    imprimi(A);
    return 0;
}