#include <stdio.h>

int main(){
    int i, j, A[5][5] = {0}, B[5][5] = {0};
        
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n Matriz A: \n");
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf("%d  ", A[i][j]);
        } printf("\n");
    }
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            B[i][j] = A[i][j]*2;
        }
    }
    printf("\n Matriz B: \n");
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf("%d  ", B[i][j]);
        } printf("\n");
    }
    
    
    
    
    
    return 0;
}