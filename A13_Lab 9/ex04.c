/*Leia três vetores u, v e w com componentes do tipo float e de tamanho  n=3 de um arquivo.
Utilize funções para determinar o volume de um paralelepípedo formado pelos vetores u, v e w.
O volume de um paralelepípedo é igual ao módulo do produto misto de u, v e w e o produto misto de u, v e w
é dado por:
(u,v,w) = u ⋅ (v ⋅ w),
assim o volume de um paralelepípedo é: 
Volume=|(u,v,w)|

Teste a função fazendo uma chamada dentro da função "main".
Imprima o resultado solicitado com 4 casas após o ponto decimal.
Obs.: Utilize o arquivo prodMistoR.txt

Entrada:                             Saída:
1 2 1                                   x = (1.0000, 2.0000, 1.0000)

2 -1 3                                 y = (2.0000, -1.0000, 3.0000)

0 3  1                                  z = (0.0000, 3.0000, 1.0000)

                                                      Volume: 8.0000                      */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


#define PATH "prodMistoR.txt" // <--- PARA CADA EXERCICIO MUDE o path

//#define DEBUG /* Descomente pra mostrar os prints de debug se necessário. */

int main(void) {
    char ParsedLine[0xFF]; //Moodle podre (Core dump se for *)
    char **CacheParsed; // [x][y] Dynamic string alloc
    FILE *fr = fopen(PATH,"r");
    if (fr == NULL) {
        puts("Arquivo não encontrado.");
        return 1;
    }
    int elementos = 0;
    /* Parser Core (char por char)*/
    int ParseActive = 1, iter = 0, slen = 0;    
    CacheParsed = malloc(1 * sizeof(char*));
    while (ParseActive) //Parser irá desligar quando EOF == true.
    {
        char cbuffer = fgetc(fr);
        if (cbuffer == EOF) { ParseActive = 0; }
        if (isalnum(cbuffer) || cbuffer == '.' || cbuffer == '-') { // Whitelist
            ParsedLine[iter++] = cbuffer;
        } else {            
            if ((slen = strlen(ParsedLine)) != 0) { 
#ifdef DEBUG
                //printf("Allocating: %lu\n", (1+elementos) * sizeof(char*));
#endif
                CacheParsed = realloc(CacheParsed, elementos * sizeof(char*) + 1);
                CacheParsed[elementos] = malloc(slen * sizeof(char) + 1); 
                strcpy(CacheParsed[elementos], ParsedLine); 
                iter = 0;  memset(ParsedLine, 0, sizeof(ParsedLine)); //limpar cached linha quando terminar.
                /* Debug */
#ifdef DEBUG
                printf("len %d | %s\n", slen, CacheParsed[elementos]);
#endif
                elementos++;
            }
        }
    }
    fclose(fr);
    // FIM DO PARSER //
#ifndef DEBUG
     double m[3][3]; //0 = x | 1 = y | 2 = z
    int ctable = -1;
    for (int i=0; i<elementos; i++) {
        double Nato = atof(CacheParsed[i]);
        int ModI = i % 3;
        if (ModI == 0) {
            ctable++;
        }
        //printf("[%d][%d]: %d = %lf\n", ctable, ModI, ModI, Nato);
        m[ModI][ctable] = Nato;    
    }
    //i dont care shit math | formula |MOD| = a(ei − fh) − b(di − fg) + c(dh − eg)

    double mod3x3 = fabs(m[0][0]*(m[1][1]*m[2][2] - m[1][2]*m[2][1]) - m[0][1]*(m[1][0]*m[2][2] - m[1][2]*m[2][0]) + m[0][2]*(m[1][0]*m[2][1] - m[1][1]*m[2][0]));

    printf("x = (%.4f, %.4f, %.4f)\n", m[0][0], m[0][1], m[0][2]);
    printf("y = (%.4f, %.4f, %.4f)\n", m[1][0], m[1][1], m[1][2]);
    printf("z = (%.4f, %.4f, %.4f)\n", m[2][0], m[2][1], m[2][2]);
    printf("Volume: %.4f", mod3x3);
#endif
    return 0;
}

