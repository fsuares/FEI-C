/*5)Considere a estrutura abaixo e façaum programa que leia informações de n alunos
em um vetor alocado dinamicamente. Em seguida, imprima asinformações lidas na ordem 
decrescente das médias dos alunos.

typedef struct aluno aluno;
struct aluno {
       char nome[30];
       float media;
       int faltas;
};*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[30];
    float media;
    int faltas;
};
typedef struct aluno aluno;


int comp(aluno *, aluno *);

int main(){

    aluno inf_aluno;    
    int quant_alunos, cont, aux;

    //pegando a quantidade de alunos
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &quant_alunos);
    printf("\n");


    aluno alunos[quant_alunos];

    //obtendo as informações dos alunos
    for(int i=0; i<quant_alunos; i++){
        
        //nome
        printf("Informe o nome: ");
        scanf("%s", &alunos[i].nome);

        //media
        printf("MEDIA: ");
        scanf("%f", &alunos[i].media);

        //faltas
        printf("FALTAS: ");
        scanf("%d", &alunos[i].faltas);

        printf("\n");
    }

    //ORDENANDO EM DESCRESCENTE
    qsort(alunos, quant_alunos, sizeof(aluno), comp);

    printf("<<<<PRINTANDO EM ORDEM CRESCENTE>>>>\n\n");
    for(int i=0; i< quant_alunos; i++){
        printf("NOME: %s   MEDIA: %.2f   FALTAS: %d\n\n", alunos[i].nome, alunos[i].media, alunos[i].faltas);
    }
}




int comp(aluno *x, aluno *y){
    if(x->media == y->media){
       return 0;
    }
    else if(x->media > y->media){
       return -1;
    }
    else{
       return 1;
    }
}