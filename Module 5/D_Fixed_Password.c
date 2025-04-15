#include<stdio.h>
int main() {
    int correctPassword = 1999;
    int X;
    while(scanf("%d", &X)){
        if(X == correctPassword){
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }
    return 0;
}