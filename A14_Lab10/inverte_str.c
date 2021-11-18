/*Leia uma string com tamanho máximo 60 e defina uma função com assinatura
void inverte (char *orig, int n) que inverte a string.
Teste a função fazendo uma chamada dentro da função "main".
Obs.: Não utilize nenhuma biblioteca adicional.
Exemplo:

Entrada:                             Saída:
!@wesDFa+-3                     3-+aFDsew@! */



#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    char s[60];
    fgets(s, sizeof s, stdin);
    int tamanho = strlen(s);
    for (int i = tamanho - 2; i >= 0; i--){
        if (s[i] != '\x0'){
            printf("%c", s[i]);
        }
    }
    return 0;
}

