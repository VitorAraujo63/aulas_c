#include <stdio.h>
int main() {
    int x = 10;
    
    int *p = &x;
    
    printf("Valor de x: %d\n", x); // valor de x
    
    printf("Endereço de x: %p\n", &x); // endereço de x
    
    printf("Valor de p: %p\n", p); // valor de p (endereço de x)
    
    printf("Valor apontado por p: %d\n", *p); // valor apontado por p dentro do endereço de x (valor de x)
    
    return 0;
}
