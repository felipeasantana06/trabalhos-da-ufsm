#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i, j;
    float  A[5][2];

    for (i=0;i<5;i++){
        printf("delegacao numero %d : ", i+1);
        for(j=0; j<2; j++){
            scanf("%f", &A[i][j]);
        }
    }
    j=0;

    for (i=0;i<5;i++){ 
        printf("delegacao numero %d : ", i+1);
            if (A[i][j]>A[i][j+1]){
                printf("%f", A[i][j]);
            }
            else{
                printf("%f", A[i][j+1]);
            }
            printf("\n");
    }

    return 0;
        }