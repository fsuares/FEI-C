/*Considere um arquivo que possui uma lista de, no máximo, 20 pares de números reais (valores x e y).
Elabore um programa para calcular o valor z=x2+y2, para cada par de valores, e colocar a tabela x,y,z. 
A saída deve ter, em cada linha, uma tripla de valores x,y,z. 
Utilize 4 casas decimais depois da vírgula.
Obs.: Utilize o arquivo: quadradoR.txt

Exemplo:
1.0000   2.0000  5.0000

3.0000   4.0000  25.0000

1.0000   6.0000  37.0000                           */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


#define PATH "quadradoR.txt" 

int main(void) {
    char ParsedLine[0xFF]; 
    char **CacheParsed; 
    FILE *fr = fopen(PATH,"r");
    if (fr == NULL) {
        puts("Arquivo não encontrado.");
        return 1;
    }
    int elementos = 0;
  
    int ParseActive = 1, iter = 0, slen = 0;    
    CacheParsed = malloc(1 * sizeof(char*));
    while (ParseActive) 
    {
        char cbuffer = fgetc(fr);
        if (cbuffer == EOF) { ParseActive = 0; }
        if (isalnum(cbuffer) || cbuffer == '.' || cbuffer == '-') { 
            ParsedLine[iter++] = cbuffer;
        } else {            
            if ((slen = strlen(ParsedLine)) != 0) { 
#ifdef DEBUG
                
#endif
                CacheParsed = realloc(CacheParsed, elementos * sizeof(char*) + 1);
                CacheParsed[elementos] = malloc(slen * sizeof(char) + 1); 
                strcpy(CacheParsed[elementos], ParsedLine); 
                iter = 0;  memset(ParsedLine, 0, sizeof(ParsedLine)); 
#ifdef DEBUG
                printf("len %d | %s\n", slen, CacheParsed[elementos]);
#endif
                elementos++;
            }
        }
    }
    fclose(fr);

#ifndef DEBUG
    for (int i=0; i<elementos;i = i + 2) {
        double z = pow(atof(CacheParsed[i]), 2) + pow(atof(CacheParsed[i+1]), 2);
        printf("%.4f %.4f %.4f\n", atof(CacheParsed[i]), atof(CacheParsed[i+1]), z);
    }

#endif
    return 0;
}

