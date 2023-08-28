#include "stdio.h"

// ..

void main(void) {
    int a = 0; 
    int b = 0;

    int foo(int a) {
    a = a + 1; // acessa variavel global
    return a;
}       

    while (1) {
        foo();
        
        if (a > 5) {
            b = 1;
        }
    }
}
