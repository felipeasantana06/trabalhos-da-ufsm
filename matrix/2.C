#include <stdio.h>

int main()
{
    int i, j, A[3][3] = {0}, l, c;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }


        for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", A[i][j]);
        } printf("\n");
    }


    printf("\n linha: ");
    scanf("%d", &l);
    printf("\n coluna: ");
    scanf("%d", &c);

    printf("\n \t %d ", A[l][c]);
    return 0;
}