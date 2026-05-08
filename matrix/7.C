#include <stdio.h>

int main(){
    int i, j, A[3][4] = {0};
        
    for (i = 0; i<3; i++){
        for (j = 0; j<4; j++){
            A[i][j] = i + j;
        }
    }
    printf("\n Matriz A: \n");
    for (i = 0; i<3; i++){
        for (j = 0; j<4; j++){
            printf("%d  ", A[i][j]);
        } printf("\n");
    }

    return 0;
}