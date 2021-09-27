/*Leia um vetor Valores com n componentes do tipo double e
defina uma função para determinar a média entre os n elementos do vetor Valores.
Teste a função fazendo uma chamada dentro da função "main".
Imprima o resultado solicitado com 2 casas após o ponto decimal.
Exemplo :

            Entrada :             Saída :
5   -9.5 4.9 5.3 0 3.6            0.86 */


#include <stdlib.h>
#include <stdio.h>

    void
    media(int vetorSize)
{
    double Valores[vetorSize];
    float media, sum = 0;
    int i;

    for (i = 0; i < vetorSize; i++)
    {
        scanf("%lf", &Valores[i]);
        sum = Valores[i] + sum;
    }

    media = sum / vetorSize;
    printf("%.2f", media);
}

int main()
{
    int size;

    scanf("%d", &size);

    media(size);
}

