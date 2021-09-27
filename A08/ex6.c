
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

void Angulo(double modulox, double moduloy, double soma)
{
    double anguloRadianos, anguloGraus, arcos;

    anguloRadianos = soma / (modulox * moduloy);
    arcos = acos(anguloRadianos);
    anguloGraus = (180 * arcos) / M_PI;

    printf("Angulo entre os vetores: %.4lf graus.", anguloGraus);
}

int main(){
    int i, size;
    double modulox = 0, moduloy = 0, produto, soma = 0;

    //-----n-----
    scanf("%d", &size);

    double x[size];
    double y[size];

    //------x------
    for (i = 0; i < size; i++){
        scanf("%lf", &x[i]);
        modulox = pow(x[i], 2) + modulox;
    }
    //definindo o modulox
    modulox = sqrt(modulox);

    //------y------
    for (i = 0; i < size; i++){
        scanf("%lf", &y[i]);
        moduloy = pow(y[i], 2) + moduloy;
    }
    //definindo o moduloy
    moduloy = sqrt(moduloy);

    for (i = 0; i < size; i++){
        produto = x[i] * y[i];
        soma = soma + produto;
    }

    Angulo(modulox, moduloy, soma);
}

