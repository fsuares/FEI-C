/*1)Crie uma função que receba como parâmetros dois vetores de inteiros: 
x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2.  
A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, 
contendo a união de x1e x2e usar o ponteiro qtdpara retornar o tamanho de x3.
Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, soma_tam, cont=0;
    int *x1;
    int *x2;
    int *qtd;

    printf("Informe o tamanho do x1: ");
    scanf("%d", &n1);

    printf("Informe o tamanho do x2: ");
    scanf("%d", &n2);

    soma_tam = n1 + n2;

    //definindo os tamanhos dos vetores x1, x2 e x3
    x1 = malloc(n1*sizeof(int));    
    x2 = malloc(n2*sizeof(int));
    int x3[soma_tam];


    //valores do x1
    printf("Valores do vetor x1\n");
    for(int i=0; i < n1; i++){
        printf("Insira o valor para a posição  %d do vetor --> \n", i+1);
        scanf("%d", x1+i);
        x3[i] = *(x1+i);//adicionando valores dos vetores diretamente no x3

    }
    
    //valores do x2
    printf("Valores do vetor x2\n");
    for(int i=0; i < n2; i++){
        printf("Insira o valor para a posição  %d do vetor --> \n", i+1);
        scanf("%d", x2+i);
        x3[n1+i] = *(x2+i);
    }

    //ORDENANDO
    for(int i=0; i<soma_tam; i++){
        for(int j=i+1; j<soma_tam; j++){
            if(x3[j]==x3[i]){
                for(int k=j; k<(soma_tam)-1; k++){
                    x3[k] = x3[k+1];
                }
                soma_tam--;
            }
        }
    }

    //printando os vetores

    //x1
    printf("O VETOR X1 É:\n");
    for(int i=0; i<n1; i++){
        printf("%d ", x1[i]);
    }
    printf("\n");

    //x2
    printf("O VETOR X2 É:\n");
    for(int i=0; i<n2; i++){
        printf("%d ", x2[i]);
    }
    printf("\n");

    //x3
    printf("O VETOR X3 É:\n");
    for(int i=0; i<soma_tam; i++){
        printf("%d ", x3[i]);
        cont++;//contaando quantos valores o x3 tem
    }

    //pegando o tamanho do x3
    printf("\n");
    qtd = &cont;//obtendo o valores de cont por meio de um ponteiro
    printf("O x3 possui %d elementos.\n", *qtd);
}

