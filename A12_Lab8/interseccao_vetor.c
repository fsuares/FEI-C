/*2)Crie uma função que receba como parâmetros dois vetores de inteiros: 
x1 e x2, e as suas  respectivas  quantidades  de  elementos: n1e n2.  
A  função  deverá  retornar  um ponteiro para um terceiro vetor, x3, 
alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro 
qtd para retornar o tamanho de x3.
Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, menor_tam, tam_x3 = 0; //tam_x3 será o tamanho de x3 ajustado
    int *x1;
    int *x2;
    int *x3;
    int *qtd;

    printf("Informe o tamanho do x1: ");
    scanf("%d", &n1);

    printf("Informe o tamanho do x2: ");
    scanf("%d", &n2);

    //tamanho do x3(que vair receber o menor tamanho entre n1 e n2)
    if (n1 < n2){
        menor_tam = n1;
    }
    else if (n2 < n1){
        menor_tam = n2;
    }
    else{
        menor_tam = n1;
    }

    //definindo os tamanhos dos vetores x1, x2 e x3
    x1 = malloc(n1 * sizeof(int));
    x2 = malloc(n2 * sizeof(int));
    x3 = malloc(menor_tam * sizeof(int));

    //valores do x1
    printf("Valores do vetor x1\n");
    for (int i = 0; i < n1; i++){
        printf("Insira o valor para a posição  %d do vetor --> ", i + 1);
        scanf("%d", x1 + i);
    }

    //valores do x2
    printf("Valores do vetor x2\n");
    for (int i = 0; i < n2; i++){
        printf("Insira o valor para a posição  %d do vetor --> ", i + 1);
        scanf("%d", x2 + i);
    }

    //INTERSECÇÃO
    for (int i = 0; i < n1; i++){
        for (int j = 0; j < n2; j++){
            if (*(x1 + i) == *(x2 + j)){ //comparando os valores entre x1 e x2
                *(x3 + tam_x3) = *(x1 + i);
                tam_x3++;
                break;
            }
        }
    }

    //printando os vetores

    //x1
    printf("O VETOR X1 É:\n");
    for (int i = 0; i < n1; i++){
        printf("%d ", x1[i]);
    }
    printf("\n");

    //x2
    printf("O VETOR X2 É:\n");
    for (int i = 0; i < n2; i++){
        printf("%d ", x2[i]);
    }
    printf("\n");

    //x3
    printf("O VETOR X3 É:\n");
    for (int i = 0; i < tam_x3; i++){
        printf("%d ", *(x3 + i));
    }

    printf("\n");
    qtd = &tam_x3;
    printf("O x3 possui %d elementos.", *qtd);
}