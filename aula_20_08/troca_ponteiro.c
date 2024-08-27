#include <stdio.h>


int main() {
    int x = 10;
    int y = 20;
    
    int *x2 = &x;
    int *y2 = &y;
    
    printf("Antes da troca: \nx = %d, y = %d\n", *x2, *y2);
    
    int save = x;
    int *x3 = &save;
    x = ("%d", *y2);
    y = ("%d", *x3);
    
    printf("Depois da troca: \nx = %d, y = %d",x,y);
    
    return 0;
}