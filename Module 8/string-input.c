#include<stdio.h>
int main() {
    char a[10];
    scanf("%s", a);
    printf("%s\n", a);
    printf("%d", a[5]);   // 0 will be printed because there is a space after the last character in the string.
    // The string is terminated by a null character '\0' which is not printed.
    return 0;
}