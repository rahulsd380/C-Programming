#include<stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int M1;
        int M2;
        int D;
        scanf("%d %d %d", &M1, &M2, &D);

        int totalFarmer = M1 + M2;
        int newDays = (M1 * D) / totalFarmer;

        int lessDays = D - newDays;
        printf("%d\n", lessDays);
    }

    // printf("%d", M1);
    return 0;
}