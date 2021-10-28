/*3)Faça  um  programa  que  leia  a  quantidade  de  elementos ne  crie  dinamicamente
um vetor de n elementos e passe esse vetor para uma função que irá ler os elementos desse vetor. 
Depois, no programa principal, o vetor preenchido deve ser impresso.*/


#include <stdio.h>
#include <stdlib.h>

//declarando a função para ler o vetor
void lendo_vetor(int tamanho, int *pont_vetor);

int main(){
    int n;
    int *vetor;

    //tamanho do vetor
    printf("Informe o tamanho do vetor ---> ");
    scanf("%d", &n);

    //declarando o vetor
    vetor = malloc(n*sizeof(int));

    //adicionando valores ao vetor
    for(int i=0; i<n; i++){
        printf("Informe o %d° valor do vetor: ", i+1);
        scanf("%d", vetor+i);
    }
    
    //puxando a função
    lendo_vetor(n, vetor);
}

void lendo_vetor(int tamanho, int *pont_vetor){
    printf("Os valores informados para o vetor são: \n---> ");
    
    //printando
    for(int i=0; i<tamanho; i++){
        printf("%d ", *(pont_vetor+i));
    }
}