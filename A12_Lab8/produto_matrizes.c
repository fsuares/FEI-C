/*6)Utilizando alocação dinâmica de matrizes, escreva um programa para receber duas matrizes
de tamanho 3x3 e calcular seu produto*/


#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3

int main(){
    int **A, **B, **C, soma, i, j;

    A = malloc(LIN*COL*sizeof(int*));
    B = malloc(LIN*COL*sizeof(int*));
    C = malloc(LIN*COL*sizeof(int*));        

    for(i = 0; i < COL; i++){
        A[i] = malloc(LIN*sizeof(int));
    }

    for(i = 0; i < COL; i++){
        B[i] = malloc(LIN*sizeof(int));
    }

    for(i = 0; i < COL; i++){
        C[i] = malloc(LIN*sizeof(int));
    }

    for(i = 0; i < LIN; i++){
        for (j = 0;j<COL;j++){
            printf("Digite o elemento da linha %d coluna %d da matriz A: ", i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < LIN; i++){
        for (j = 0; j < COL; j++){
            printf("%d \t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < LIN; i++){
        for (j = 0; j < COL; j++){
            printf("Digite o elemento da linha %d coluna %d da matriz B: ", i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < LIN; i++){
        for (j = 0; j < COL; j++){
            printf("%d \t", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            soma = 0;
                for (int k = 0; k < 3; k++){
                    soma += A[i][k]*B[k][j];
                }
            C[i][j] = soma;
        }
    }

    printf("\n");

    for (i = 0; i < LIN; i++){
        for (j = 0;j < COL; j++){
            printf("%d \t",C[i][j]);
        }
        printf("\n");
    }
    free(A);
    free(B);

    return(0);
}

