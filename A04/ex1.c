//Elaborar um programa para exibir 2 números inteiros em ordem crescente.
//Exemplo:
//Entrada: 5 3 
//Saída 3 5


#include <stdio.h>
#include <stdlib.h>

    int
    main(){
    int n1, n2;
    printf("Error...\n\n");
    system("pause");
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segund numero: \n");
    scanf("%d", &n2);

    if (n1 > n2){
    printf("%d %d", n2, n1);
    }

    else{
        printf("%d %d", n1, n2);
    }
}

