#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    // Inicializa o gerador com o tempo atual
    srand(time(NULL));
    int i, j, A[4][4], B[4][4], C[4][4];

    for (i=0; i< 4; i++){
        for (j=0; j< 4; j++){
            A[i][j] =  rand() % 100;
        }
    }

    for (i=0; i< 4; i++){
        for (j=0; j< 4; j++){
            B[i][j] =  rand() % 100;
        }
    }
    
    for (i=0; i< 4; i++){
        for (j=0; j< 4; j++){
            C[i][j]= B[i][j] + A[i][j];
        }
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", A[i][j]);
        } printf("\n");
    }printf("\n");
    printf("\n");
    printf("\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", B[i][j]);
        } printf("\n");
    }printf("\n");
    printf("\n");
    printf("\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", C[i][j]);
        } printf("\n");
    }
    return 0;
}