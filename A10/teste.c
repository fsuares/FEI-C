#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 3, j = 5;
    int *p = &i, *q = &j;

    *p - *p;
    printf("%d\n", p);
}