/*Considere um arquivo que possui uma lista de números reais. Elabore um programa para determinar
qual o maior valor, qual sua posição e quantos números possui esse arquivo.
Obs.: Utilize o arquivo: maiorR.txt

Exemplo:
Maior: # na posicao #
Total de Elementos: #

For example:
Maior: 74.4600 na posicao 31
Total de Elementos: 32                            */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define PATH "maiorR.txt" 

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
   double LargestNum = 0;
    int LargestNumI = 0;
    for (int i=0; i<elementos;i++) {
        double ConvertStr = atof(CacheParsed[i]);
        if (ConvertStr > LargestNum) {
            LargestNum = ConvertStr;
            LargestNumI = i;
        }
    }

    printf("Maior: %.4f na posicao %d\n", LargestNum, LargestNumI + 1);
    printf("Total de Elementos: %d\n", elementos);
#endif
    return 0;
}