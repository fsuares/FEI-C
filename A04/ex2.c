//Elaborar um programa para exibir 3 números inteiros em ordem crescente.
//Exemplo: 
//Entrada: 5 3 4 
//Saída: 3 4 5


#include <stdio.h>
#include <stdlib.h>

    int
    main()
{
    int a, b, c, m1, m2, m3, temp;
    scanf("%d %d %d", &a, &b, &c);

    if (b < a){
        temp = a;
        a = b;
        b = temp;
    }

    m1 = a;
    m2 = b;

    (b<= c) ? (m3 =c) : (a <= c) ? (m2 = c, m3 = b) : (m1 = c, m2 = a, m3 = b);
    printf("%d %d %d", m1, m2, m3); 
}

