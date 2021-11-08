/*Elabore um programa que exibe os valores abaixo solicitados de uma determinada empresa.
Considere o arquivo empresaR.txt
A cada linha desse arquivo contém o primeiro nome do funcionário (string),gênero (m ou f, char) e a 
idade (int), nesta ordem.

Exemplo:

Maria f 23

Valores Solicitados:

    a quantidade total de funcionários;
    o nome dos funcionários com mais de 25 anos e sua idade;
    a quantidade de funcionários com mais de 25 anos de idade;
    a quantidade total de funcionários do sexo feminino.

Saída:

Total de funcionarios: 10

Nome do funcionario +25: Artur   idade: 54
Nome do funcionario +25: Pedro   idade: 60
Nome do funcionario +25: Juca    idade: 30
Nome do funcionario +25: Bene    idade: 48
Nome do funcionario +25: Caio    idade: 32
Nome do funcionario +25: Dirce   idade: 45
Nome do funcionario +25: Maria   idade: 34

Total de funcionarios +25: 7

Total de funcionarias: 5*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define PATH "empresaR.txt" 

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
int Quant = (int)(elementos / 3); 
    int oldzera = 0;
    int FemiCount = 0;
    printf("Total de funcionarios: %d\n\n", Quant);
 
    for (int i = 0; i<elementos;i+= 3) {
        char *nome  = CacheParsed[i];
        char *gen   = CacheParsed[i + 1];
        int idade = atoi(CacheParsed[i + 2]);

        if (strcmp(gen, "f")) {
            FemiCount += 1;
        }
        if (idade >= 25) {
            printf("Nome do funcionario +25: %s idade: %d\n", nome,idade);
            oldzera++;
        }

    }
    printf("\nTotal de funcionarios +25: %d\n\n", oldzera);
    printf("Total de funcionarias: %d", FemiCount);
#endif
    return 0;
}