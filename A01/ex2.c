#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarando as variaveis e seus tipos
    float A, B, C, media;

    //recebe os valores das variaveis pelo 'input'
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    
    //calcula a media
    media = (2.0*A + 3.0*B + 5.0*C)/10;

    //exibe a media para o usuario
    printf("Media = %.1f", media);

    //altera o tipo primitivo da função MAIN
    return 0; 
}



