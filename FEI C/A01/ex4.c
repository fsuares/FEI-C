

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis e seus tipos
    int valor, cem, cinq, vinte, dez, cinco, dois, um;

    //recenbendo o valor da variavel 'valor'
    scanf("%d", &valor);

    //calculando o numero de cédulas
    cem = valor / 100;
    cinq = (valor % 100) / 50;
    vinte = ((valor % 100) % 50) / 20;
    dez = (((valor % 100) % 50) % 20) / 10;
    cinco = ((((valor % 100) % 50) % 20) % 10) / 5;
    dois = (((((valor % 100) % 50) % 20) % 10) % 5) / 2;
    um = ((((((valor % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    //exibindo a quantidade de celulas de cada valor
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
}

