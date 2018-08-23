#include <stdio.h>

int main() {
    int N1, N2;
    scanf("%d %d", &N1, &N2);
    int time1 = 0;
    int time2 = 0;
    int time3 = 0;
    int sum = 0;
    int fake_N1 = N1;
    while (fake_N1 <= N2) {
        time2++;
        fake_N1++;
    }
    while (N1 <= N2) {
        printf("%5d", N1);
        sum += N1;
        N1++;
        time1++;
        time3++;
        if (time1 == 5 && time3 != time2) {
            printf("\n");
            time1 = 0;
        }
    }
    printf("\nSum = %d", sum);
    return 0;
}