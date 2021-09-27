
/*Leia um vetor Taxas com n componentes do tipo double e
defina uma funçao para determinar o i­ndice do maior valor dentre os n elementos do vetor  Taxas.
Teste a funçao fazendo uma chamada dentro da funçao "main". O resultado deverá ser do tipo int
Exemplo:
Entrada:                             Saída:
5 -9.5 4.9 5.3 0 3.6                     2
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior(int n){
    int i, maior = 0, temp;
    double Taxas[n];

    for (i = 0; i < n; i++){
        scanf("%lf", &Taxas[i]);
    }

    for (i = 0; 1 < n; i++){
        if (Taxas[i] > maior)
        {
            maior = Taxas[i];
            temp = i;
        }
    }
    return temp;
}

int main(void){
    int n = 1;
    scanf("%d", &n);
    printf("%d", maior(n));
}
