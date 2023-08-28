#include "stdio.h"

// ..
int a = 0; // variavel global

void main(void) {
    int b = 0;

    void foo(void) {
    a = a + 1; // acessa variavel global
}       

    while (1) {
        foo();
        
        if (a > 5) {
            b = 1;
        }
    }
}
