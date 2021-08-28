//Elaborar um programa para exibir 4 números inteiros em ordem crescente.
//Exemplo:
//Entrada:                      Saída:
//      5 3 4 2                     2 3 4 5


#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d, m1, m2, m3, m4, temp;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b < a){
        temp = a;
        a = b;
        b = temp;
    }

    m1 = a;
    m2 = b;

    if (d < c)
    {
        temp = c;
        c = d;
        d = temp;
    }

    m3 = c;
    m4 = d;

    (m3 <= m1) ? (m3 = m2, m2 = m1, m1 = c) : (m3 <= m2) ? (m3 = m2, m2 = c) : (m3 = c);
    (m4 <= m1) ? (m4 = m3, m3 = m2, m2 = m1, m1 = d) : (m4 <= m2) ? (m4 = m3, m3 = m2, m2 = d) : (m4 <= m3) ? (m4 = m3, m3 = d) : (m4 = d);

    printf("%d %d %d %d", m1, m2, m3, m4);
}

