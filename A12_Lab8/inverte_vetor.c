/*7)Crie uma função que receba um vetor ve seu tamanho n por parâmetro e crie um 
novo vetor por alocação dinâmica, preenchendo-o com o conteúdo de v em ordem inversa, 
imprimindo-o ao final.*/


#include <stdlib.h>
#include <stdio.h>

void func_recebe(int *vetor, int tamanho);

int main(){
    int tamanho_vetor;

    //tamanho do vetor
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    //vetor
    int vetor_pri[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++){
        printf("Informe o %d° valor do vetor: ", i + 1);
        scanf("%d", &vetor_pri[i]);
    }
    func_recebe(vetor_pri, tamanho_vetor);
}

void func_recebe(int *vetor, int tamanho){
    int *vetor_final;
    vetor_final = malloc(tamanho * sizeof(int));

    //printando o primeiro vetor
    printf("<<PRINTANDO O PRIMEIRO VETOR>>\n -->");
    for (int i = 0; i < tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n");

    printf("<<PRINTANDO O VETOR INVERTIDO>>\n -->");
    //deixando ao contrario
    for (int i = 0; i < tamanho; i++){
        *(vetor_final + i) = vetor[tamanho - i - 1];
        printf(" %d ", *(vetor_final + i));
    }
}