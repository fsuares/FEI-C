/*Leia uma string com tamanho máximo 50 e defina uma função com assinatura
int tamanho (char *s)
que retorne o tamanho dessa string.
Teste a função fazendo uma chamada dentro da função "main".
Obs.: Não utilize nenhuma biblioteca adicional.

Exemplo:

Entrada:                             Saída:
!@wesDFa+-3                             11*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    char s[50];
    scanf("%s", s);
    int tamanho = strlen(s);
    printf("%d", tamanho);
    return 0;
}

