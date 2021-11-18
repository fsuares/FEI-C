/*Leia uma string com tamanho máximo 50 e defina uma função com assinatura 
void inverteMaiusMinus (char *s, int n)
que imprime os caracteres maiúsculos em minúsculos e os caracteres minúsculos em caracteres maiúsculos.
Teste a função fazendo uma chamada dentro da função "main".
Obs.: Não utilize nenhuma biblioteca adicional.
Exemplo:

Entrada:                             Saída:
!@wesDFa+-3                     !@WESdfA+-3 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
  char s[50];
  int aux;
  scanf("%s", s);
  int tamanho = strlen(s);
  for(int i = 0; i < tamanho; i++){
    if(s[i] > 64 && s[i] < 91){
      aux = s[i] + 32;
      printf("%c", aux);
    }
    else if(s[i] > 96 && s[i] < 123){
      aux = s[i] - 32;
      printf("%c", aux);
    }
    else{
      printf("%c", s[i]);
    }
  }
  return 0;
}

