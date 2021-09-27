/*Leia um vetor com n componentes do tipo int e
defina uma função busca para retornar o índice de onde um valor dado foi encontrado ou -1.
Teste a função fazendo uma chamada dentro da função "main".
Exemplo:

Entrada:                             Saída:
5 9 7 6 3 2                              2
6

3 4 6 7                                 -1
1                                                                   */

#include <stdio.h>
#include <stdlib.h>

int busca(int vetor[], int n){
    int buscar, i, ver = -1;
    scanf("%d", &buscar);

    for (i = 0; i < n; i++)
    {
        if (vetor[i] == buscar)
        {
            ver = i;
        }
    }
    return ver;
}

int main(){
    int n, i;
    scanf("%d", &n);
    int vetor[n];

    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Busca: %d", busca(vetor, n));
}

