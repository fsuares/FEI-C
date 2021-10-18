/*Elaborar um programa cuja entrada são 3 números reais e cuja saída apresenta esses
números em ordem crescente.
Utilize estrutura, dupla precisão e 4 casas depois da vírgula.
Exemplo:

Entrada                       Saída

2.4 0.9 1.8                   0.9000
                              1.8000
                              2.4000                     */

#include <stdio.h>
#include <stdlib.h>

struct numeros{
  double n1;
  double n2;
  double n3;
}reais;

int main(){
    struct numeros reais;
    scanf("%lf", &reais.n1);
    scanf("%lf", &reais.n2);
    scanf("%lf", &reais.n3);
    double ordem[3];
    if(reais.n1 > reais.n2 && reais.n1 > reais.n3){
        ordem[0] = reais.n1;
        if(reais.n2 > reais.n3){
            ordem[1] = reais.n2;
            ordem[2] = reais.n3;
        }
        else{
            ordem[2] = reais.n2;
            ordem[1] = reais.n3;
        }
    } 
    else if(reais.n2 > reais.n1 && reais.n2 > reais.n3){
        ordem[0] = reais.n2;
        if(reais.n1 > reais.n3){
            ordem[1] = reais.n1;
            ordem[2] = reais.n3;
        }
        else{
            ordem[2] = reais.n1;
            ordem[1] = reais.n3;
        }
    }
    else{
        ordem[0] = reais.n3;
        if(reais.n1 > reais.n2){
            ordem[1] = reais.n1;
            ordem[2] = reais.n2;
        }
        else{
            ordem[2] = reais.n2;
            ordem[1] = reais.n1;
        }
    }
    for(int i = 2; i != -1; i -= 1){
        printf("%.4lf\n", ordem[i]);
    }
}

