/*Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando 
as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra 
da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. 
As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.
Obs.: Não utilize nenhuma biblioteca adicional.
Exemplo:

Entrada:                             Saída:
Tpo oCder                           TopCoder                  
aa bb                                   abab*/


#include <stdio.h>
#include <stdlib.h>


int main(){
    int N;
    scanf("%i", &N);

    while (N--){
        char *palavra1 = (char *)malloc(sizeof(char) * 50), *palavra2 = (char *)malloc(sizeof(char) * 50);
        scanf("%s %s", palavra1, palavra2);
        int contadorPalavra1 = 0;
        int contadorPalavra2 = 0;

        while (palavra1[contadorPalavra1] != '\0')
            contadorPalavra1++;

        while (palavra2[contadorPalavra2] != '\0')
            contadorPalavra2++;

        int maior = contadorPalavra1;

        if (contadorPalavra1 < contadorPalavra2)
            maior = contadorPalavra2;

        int indice = 0;

        while (maior--){
            if (indice < contadorPalavra1)
                printf("%c", palavra1[indice]);

            if (indice < contadorPalavra2)
                printf("%c", palavra2[indice]);
            indice++;
        }
        printf("\n");
    }
    return 0;
}

