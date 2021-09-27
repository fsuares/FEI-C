//Elaborar um programa que inverte números.
//Exemplo:
//Entrada:           Saída:
//    812              218


#include <stdio.h>
#include <stdlib.h>

//função main
int main(){
    //declarando as variaveis
    int num, total;
    scanf("%d", &num);

    if (num >= 0){
    do{
        total = num % 10;
        printf("%d", total);
        num /= 10;
    } 
    while (num != 0);{
            printf("\n");
        }
    }
}

