#include<stdio.h>
int main() {
    char a[20];
    fgets(a, 20, stdin); // Read a string with spaces
    printf("%s", a);
    return 0;
}