#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i<N; i++){
        scanf("%d", &A[i]);
    }
    int countByTwo = 0;
    int countByThree = 0;
    for(int i = 0; i<N; i++){
        // printf("%d ", A[i]);
        if(A[i] % 2 ==0 && A[i] % 3== 0){
            countByTwo++;
        }
        else if(A[i] % 2 == 0){
            countByTwo++;
        } else if(A[i] % 3 == 0){
            countByThree++;
        }
    }
    printf("%d %d", countByTwo, countByThree);

    return 0;
}


// countByTwo = 2
// countByThree = 1