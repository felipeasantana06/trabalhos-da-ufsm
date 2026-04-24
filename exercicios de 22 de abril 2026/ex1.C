#include <stdio.h>

int main()
{

    int i, j, r[5], s[10], n = 0, k=0;

    printf("digite 5 para o scanf de r: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &r[i]);
    }
    printf("digite 10 para o scanf de s \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &s[i]);
    }
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 5; i++)
        {
            if (s[j] == r[i])
            {
                n = n + 1;
            }
        }
    }
    int x[n];
    printf("repetiu %i numeros \n", n);

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 5; i++)
        {
            if (s[j] == r[i])
            {
                x[k] = s[j];
                k=k+1;
            }
        }
        
    }

    for (i = 0; i < n; i++)
    {
        printf("%i \n", x[i]);
    }
    return 0;
}