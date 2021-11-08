/*Considere um arquivo que possui uma lista de, no máximo, 20 linhas, onde cada linha possui o nome de um 
discente (apenas uma palavra) e a sua respectiva nota (0...10). Elabore um programa que mostre na tela do 
computador apenas os alunos que obtiveram nota maior ou igual a 5.0
Utilize 1 casa decimal depois da vírgula.
Obs.: Utilize o arquivo: notasR.txt

Exemplo:

Artur 7.2

Maria 5.4

Rui  6.3                                                                                                        */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


#define PATH "notasR.txt" 

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
        double num = atof(CacheParsed[i+1]);
        if (num >= 5) {
            printf("%s %s\n", CacheParsed[i], CacheParsed[i+1]);
        }
    }
#endif
    return 0;
}

