/*Leia dois vetores x e y com componentes do tipo double e de tamanho  n. 
Defina uma função para determinar a menor distância  entre os componentes dos dois vetores.
Defina uma função para determinar a maior distância  entre os componentes dos dois vetores.
Teste a função fazendo uma chamada dentro da função "main".
Imprima o resultado solicitado com 2 casas após o ponto decimal.
Exemplo:

Entrada:                             Saída:

3                                       Menor Distancia: 1.00

1 2 3                                   Maior Distancia: 5.00

4 5 6                                                                                              */


#include <stdlib.h>
#include <stdio.h>
#include <math.h>


double Maior(double *x, double *y, int n);
double Menor(double *x, double *y, int n);

int main(void){
    int n, i;

    scanf("%d", &n);
    double x[n], y[n];

    //definindo os valores de x
    for (i = 0; i < n; i++){
        scanf("%lf", &x[i]);
    }

    //definindo os valores de y
    for (i = 0; i < n; i++){
        scanf("%lf", &y[i]);
    }

    printf("Menor Distancia: %.2lf\n", Menor(x, y, n));
    printf("Maior Distancia: %.2lf", Maior(x, y, n));
    return 0;
}

double Maior(double *x, double *y, int n){
    int i, j;
    double maior = -999, distancia;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            distancia = fabs(y[j] - x[i]);
            if (distancia > maior){
                maior = distancia;
            }
        }
    }
    return maior;
}

double Menor(double *x, double *y, int n){
    int i, j;
    double menor = 999, distancia;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            distancia = fabs(y[j] - x[i]);
            if (distancia < menor){
                menor = distancia;
            }
        }
    }
    return menor;
}

