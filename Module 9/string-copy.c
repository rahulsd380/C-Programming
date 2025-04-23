#include<stdio.h>
int main() {
    char a[101], b[101];
    scanf("%s %s", a , b);

    // Using for loop
    // int strLength = strlen(b);
    // for(int i =0; i<=strLength; i++){
    //     a[i] = b[i];
    // }

    // Using built in method
    strcpy(a, b);
    printf("%s %s", a , b);
    return 0;
}