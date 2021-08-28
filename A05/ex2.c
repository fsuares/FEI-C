//A partir de um número aleatório "a" gerado pelo sistema por meio 
//da função rand(), pedir ao usuário digitar um número aleaório. 
//Se "n" for menor que o número aleatório "a", deverá imprimir 
//"Muito pequeno", e deverá pedir outro número ao usuário, se "n" for
//maior deverá imprimir "Muito grande" e pedir outro número.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, chute;
    srand(time(NULL));
    num = 1 + rand() % 100;
    
    for(;;){
        scanf("%d", &chute);
        if (chute == num){
            printf("Voce acertou! O numero era! %d", num);
            break;
        }
        else if(chute > num){
            printf("Muito Grande...\n");
            continue;
        }
        else if(chute < num){
            printf("Muito Pequeno...\n");
            continue;
        }

        // switch(chute){
        //     case num:
        //         printf("Voce acertou! O numero era %d!", num);
        //         break;
        //     case (chute > num):
        //         printf("Muito Grande...\n");
        //         continue;
        //     case (chute < num):
        //         printf("Muito Pequeno...\n");
        //         continue;
        // }
    }
}