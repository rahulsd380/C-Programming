#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int maxNum = 0;
    for(int i=1; i<=N; i++){
        int val;
        scanf("%d", &val);
        if(val > maxNum){
            maxNum = val;
        }
    }
    printf("%d\n", maxNum);
    return 0;
}