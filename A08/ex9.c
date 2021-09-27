/*Defina uma função para determinar a menor distância euclidiana  entre n pontos contidos na reta real.
Defina uma função para determinar a maior distância euclidiana entre  n pontos contidos na reta real.
Teste a função fazendo uma chamada dentro da função "main" e use dupla precisão.
Imprima o resultado solicitado com 2 casas após o ponto decimal.
Exemplo:

Entrada:                             Saída:

3                                        Menor Distancia: 1.00

2 1 5                                  Maior Distancia: 4.00           */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double menor(double *ns, int n);
double maior(double *ns, int n);

int main(){
    int n, i;
    scanf("%d", &n);

    double ns[n];

    for (i = 0; i < n; i++){
        scanf("%lf", &ns[i]);
    }
    printf("Menor Distancia: %.2lf\nMaior Distancia: %.2lf", menor(ns, n), maior(ns, n));
}

double menor(double *ns, int n){
    int i, j;
    double menor = 999, distancia;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i != j){
                distancia = fabs(ns[i] - ns[j]);
                if(distancia <= menor){
                    menor = distancia;
                }
            }
        }
    }
    return menor;
}

double maior(double *ns, int n){
    int i, j;
    double maior = -999, distancia;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            distancia = fabs(ns[i] - ns[j]);
            if (distancia >= maior){
                maior = distancia;
            }
        }
    }
    return maior;
}