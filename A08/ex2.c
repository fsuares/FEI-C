/*Leia um vetor com n componentes do tipo int e
defina uma função para inverter os n elementos do vetor.
Exemplo:

Entrada:                             Saída:
5 9 5 3 7 1                          1 7 3 5 9 */


#include <stdio.h>
#include <stdlib.h>

int main(){
    int size, i;

    scanf("%d", &size);
    int numbers[size];

    for (i = 0; i < size; i++){
        scanf("%d", &numbers[i]);
    }

    for (i = size - 1; i >= 0; i--){
        printf("%d ", numbers[i]);
    }
}

