#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    // Inicializa o gerador com o tempo atual
    srand(time(NULL));
    
    int Mat[2][3], i, j, trans[3][2];

    for (i=0; i< 2; i++){
        for (j=0; j< 3; j++){
            Mat[i][j] =  rand() % 100;
        }
    }

    for (i=0; i< 2; i++){
        for (j=0; j< 3; j++){
            trans[j][i] = Mat[i][j] ;
        }
    }

    for (i=0; i< 2; i++){
        for (j=0; j< 3; j++){
            printf("%d \t", Mat[i][j]);
        }printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");
    for (i=0; i< 3; i++){
        for (j=0; j< 2; j++){
            printf("%d \t", trans[i][j]);
        }printf("\n");
    }


    return 0;}