#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    double num, soma;
    for(i = 1; i <= 4; i++){
        printf("Entre com a nota da %d prova: ", i);
        scanf("%lf", &num);
        soma += num;
    }
    printf("A media e %2.f", soma/4);
}