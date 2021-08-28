//Elaborar um programa que gere o n-ésimo termo da sequência de Fibonacci.
//Exemplo:
//Entrada:           Saída:
//      0                0
//      1                1
//      2                1
//      3                2
//      4                5


#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, n, f1=0, f2=1, fn;
    scanf("%d", &n);

    while(i <= n-2){
        fn = f2 + f1;
        f1 = f2;
        f2 = fn;
        i++;
    }
    printf("%d", fn);
}

