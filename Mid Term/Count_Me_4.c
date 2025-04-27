#include<stdio.h>

int main() {
    char S[10001];
    int alphabets[26] = {0};
    scanf("%s", S);
    for (int i = 0; S[i] != '\0'; i++) {
        alphabets[S[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (alphabets[i] > 0) {
            printf("%c - %d\n", i + 'a', alphabets[i]);
        }
    }
    return 0;
}
