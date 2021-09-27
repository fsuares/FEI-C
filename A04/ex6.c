//Determinar se, dados os comprimentos de 3 varetas, é ou não é possível
//formar um triângulo.(Utilize números inteiros)
//Exemplo de Entrada:    Exemplo de Saída:
//             5 3 4                     S
//             5 3 9                     N


#include <stdio.h>
#include <stdlib.h>

    //função main
int main(){
    //declarando variaveis
    int a, b, c, vdd = 0;

    //lendo as variaveis
    scanf("%d %d %d", &a, &b, &c);
    
    //verificação de lados do triângulo
    //    | b - c | < a < b + c
    //    | a - c | < b < a + c
    //    | a - b | < c < a + b

    ((b - c) < a) && (a < (b + c)) ? (vdd + 1) : (vdd + 0);
    ((a - c) < b) && (b < (a + c)) ? (vdd + 1) : (vdd + 0);
    ((a - b) < c) && (c < (a + b)) ? (vdd + 1) : (vdd + 0);

    //verficação da variavel vdd
    (vdd > 0) ? (printf("S")) : (printf("N"));
}

