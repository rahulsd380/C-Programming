#include<stdio.h>

int main() {
    char S[100001];
    fgets(S, 100001, stdin);
    int consonantCounter = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u') {
                consonantCounter++;
            }
        }
    }


    printf("%d\n", consonantCounter);
    return 0;
}
