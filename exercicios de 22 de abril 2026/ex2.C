#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pega a hora atual do relogio
    srand(time(NULL));

    int i, r[5], A[10], j, cont = 0;

    for (i = 0; i < 5; i++)
    {
        // Gerar números em um intervalo específico (ex: 1 a 100)
        int min = 1, max = 60;
        int aleatorio = (rand() % (max - min + 1)) + min;
        r[i] = aleatorio;
    }

    


    for (i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
        for (j = 0; j < 5; j++)
        {
            if (A[i] == r[j])
            {
                cont++;
            }
        }
    }

    for(i=0; i<5; i++){
        printf("%i \t", r[i]);
    }
    
    printf("numeros acertados: %i", cont);

    return 0;
}