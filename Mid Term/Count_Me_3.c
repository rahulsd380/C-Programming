#include<stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i<T; i++) {
        char S[10001];
        scanf("%s", S);
        int capitalLetters = 0;
        int smallLetters = 0;
        int numbers = 0;
        
        for (int i = 0; S[i] != '\0'; i++) {
            if (S[i] >= 'A' && S[i] <= 'Z') {
                capitalLetters++;
            }
            else if (S[i] >= 'a' && S[i] <= 'z') {
                smallLetters++;
            }
            else if (S[i] >= '0' && S[i] <= '9') {
                numbers++;
            }
        }
        
        // printf("%d\n", capitalLetters);
        printf("%d %d %d\n", capitalLetters, smallLetters, numbers);
    }
    return 0;
}
