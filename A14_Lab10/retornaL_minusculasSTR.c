/*Leia uma string com tamanho máximo 50 e defina uma função com assinatura void minusculas (char *s)
que retorne a quantidade de caracteres minúsculos.
Teste a função fazendo uma chamada dentro da função "main".

Obs.: Não utilize nenhuma biblioteca adicional.
Exemplo:

Entrada:                             Saída:
!@wesDFa+-3                               4*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char s[50];
  int contador = 0;
  scanf("%s", s);
  int tamanho = strlen(s);
  for(int i = 0; i < tamanho; i++){
    if(s[i] > 96 && s[i] < 123){
      contador++;
    }
  }
  printf("%d", contador);
  return 0;
}

