/*Leia um vetor x com componentes do tipo double e de tamanho n.
Defina uma função para determinar o módulo do vetor x,| x |.

                     | x |=∑i = 1nx2i−−−−−√

Teste a função fazendo uma chamada dentro da função "main".
Imprima o resultado solicitado com 2 casas após o ponto decimal.
Exemplo :

Entrada :                Saída :
2 3 4             Modulo = 5.00 */


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void somaSigma(int quant){
    double Sigma[quant];
    int i;
    float sum = 0, valor, raiz;

    //infomar os valores de cada posiçao, eleva-los ao quadrado e somar todos no mesmo laço
    for (i = 0; i < quant; i++){
        scanf("%f", &valor);
        Sigma[i] = pow(valor, 2);
        sum = Sigma[i] + sum; //somando a cada volta do laço
    }

    raiz = sqrt(sum); //raiz final

    printf("Modulo = ");
    printf("%.2f", raiz);
}

int main(){
    int quant;
    scanf("%d", &quant);
    
    somaSigma(quant);
}

