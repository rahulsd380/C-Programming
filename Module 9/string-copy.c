#include<stdio.h>
int main() {
    char a[101], b[101];
    scanf("%s %s", a , b);
    int strLength = strlen(b);
    for(int i =0; i<=strLength; i++){
        a[i] = b[i];
    }
    printf("%s %s", a , b);
    return 0;
}