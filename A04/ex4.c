//Elaborar um programa para exibir os múltiplos de um
//número compreendidos entre dois valores dados.
//Exemplo de Entrada:                 Exemplo de Saída:
//            5 9 20                          10 15 20
//            9 5 30                           9 18 27


#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, n, min, max, var;
    scanf("%d %d %d", &n, &min, &max);
    while(i <= max){
        var = n * i;
        if (min <= var && var <= max){
            printf("%d", var);
        }
        i++;
    }
}

