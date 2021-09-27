#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //declarando a variavel e seu tipo primitivo
    double num;
    
    //lendo do teclado o valor da variavel
    scanf("%lf", &num);

    //exibindo o resultado
    //conta sendo feita junto com o printf
    printf("%.0lf", pow(num, 2));
}