// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float x = 5.75;
    float *f = &x;
    
    printf("Valor de f: %.2f\n", *f);
    printf("Endereço de f: %p\n", f);
    
    
    return 0;
}