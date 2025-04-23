#include<stdio.h>
int main() {
    char a[101], b[101];
    scanf("%s %s", a , b);

    // int strLengthA = strlen(a);
    // int strLengthB = strlen(b);

    // Using for loop
    // for(int i =0; i<=strLengthB; i++){
    //     a[i+strLengthA] = b[i];
    // }

    // Using builtin func
    strcat(a, b);
    printf("%s %s", a , b);
    return 0;
}