/*4)Faça um programa que leia o tamanho de um vetor de inteiros e reserve dinamicamente 
memória para esse vetor. Em seguida, leia os elementos desse vetor, imprima o vetor lido
 e mostre o resultado da soma dos números ímpares presentes no vetor*/

#include <stdio.h>
#include <stdlib.h>

//declarando a função para ler o vetor
void soma_impares(int tamanho, int *pont_vetor);

int main()
{
    int n;
    int *vetor;

    //tamanho do vetor
    printf("Informe o tamanho do vetor ---> ");
    scanf("%d", &n);

    //declarando o vetor
    vetor = malloc(n * sizeof(int));

    //adicionando valores ao vetor
    for (int i = 0; i < n; i++)
    {
        printf("Informe o %d° valor do vetor: ", i + 1);
        scanf("%d", vetor + i);
    }

    //puxando a função
    soma_impares(n, vetor);
}

void soma_impares(int tamanho, int *pont_vetor)
{

    int soma_imp; //variavel com a soma dos impares

    printf("Os valores informados para o vetor são: \n---> ");

    //printando
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", *(pont_vetor + i));

        if (*(pont_vetor + i) % 2 != 0)
        { //verificando se o valor é impar
            soma_imp = soma_imp + *(pont_vetor + i);
        }
    }

    //PRINT DA SOMA DOS IMPARES
    printf("\n");
    printf("A soma dos impares do vetor é igual a: %d", soma_imp);
} 