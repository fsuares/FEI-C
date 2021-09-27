#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4, m;
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);
        scanf("%f", &n4);
        m = (n1 + n2 + n3 + n4) / 4;
        printf("%.2f", m);
}