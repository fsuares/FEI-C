/* Leia dois vetores x e y com componentes do tipo double e de tamanho  n=2 ou n=3. 
Utilize funções para determinar o ângulo θ, em graus, entre os vetores  x e  y , sabendo que:.

cosθ=x⋅y|x||y|

Teste a função fazendo uma chamada dentro da função "main".
Imprima o resultado solicitado com 4 casas após o ponto decimal.

Entrada:                             Saída:
2                                         Angulo entre os vetores: 90.0000 graus.

2 3

 -3 2              


Entrada:                              Saída:
3                                        Angulo entre os vetores: 60.0000 graus.

2 1 -1

1 -1 -2
*/


#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

    void graus(double anguloRadianos){
    double anguloGraus;
    anguloGraus = (180 / M_PI) * anguloRadianos;

    printf("O angulo de %lf radianos equivale a %.4lf graus.", anguloRadianos, anguloGraus);
}

int main(){
    double anguloRadianos;

    printf("Digite o angulo em radianos:\n");
    scanf("%lf", &anguloRadianos);

    graus(anguloRadianos);
}

