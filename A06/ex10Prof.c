#include <stdio.h>
#include <stdlib.h>

float media(int n)
{
    int i;
    float x, soma = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x);
        soma += x;
    }
    return soma / n;
}

int main()
{
    int num_pt = 0;

    scanf("%d", &num_pt);

    printf("Media = %f\n", media(num_pt));

    return 0;
}