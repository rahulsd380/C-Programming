#include<stdio.h>

void hello() {
    printf("Hello, World!");
    hello();
}
int main() {
    hello();
    return 0;
}

// The function which calls itself is called recursive function. And the way of calling itself is called recursion.