#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declarando as variaveis que serão utilizadas
    int seg, min, hor;

    //lendo a quantidade de segundos a ser calculada
    scanf("%d", &seg);

    //calcula as horas
    hor = seg / 3600;

    //calcula os minutos
    min = (seg % 3600) / 60;

    //calcula os segundos restantes
    seg = seg % 60;

    //mostra na tela o resultado
    printf("%d:%d:%d", hor, min, seg);
}