#include <stdio.h>
#include <math.h>
#define limited 1e-8

// S = 2 * n * n - 1    n > 1
// S = 1                n = 1
// time(mark) = n / 2 - 2 * i i <= row - 1
// time(space) = i
int X(int n) {
    int y;
    if (n == 1)
        y = 1;
    else
        y = 4 * n - 2;
    return y;
}
int main() {
    int S;
    char mark;
    scanf("%d %c", &S, &mark);
    int fake_S = S;
    double decimal;
    double n;
    if (sqrt((fake_S + 1) / 2) - (int) (sqrt((fake_S + 1) / 2)) >= limited) {
        do {
            n = sqrt((fake_S + 1) / 2);
            decimal = n - (int) n;
            fake_S--;
        } while (decimal >= limited);
    }
    else
        n = sqrt((fake_S + 1) / 2);
    int row = (int) n;
    int fake_row = row;
    for (fake_row; fake_row > 0; --fake_row) {
        if (X(fake_row)/2 == 0) {
            for (int k = 0; k < row - (fake_row); ++k) {
                printf(" ");
            }
            printf("%c", mark);
        }
        else {
            for (int k = 0; k < row - fake_row; ++k) {
                printf(" ");
            }
            for (int j = 0; j < (X(fake_row)/2); ++j) {
                printf("%c", mark);
            }
        }
        printf("\n");
    }
    for (int i = 2; i <= row; ++i) {
        for (int k = row - i; k > 0; --k) {
            printf(" ");
        }
        for (int j = 0; j < (X(i)/2); ++j) {
            printf("%c", mark);
        }
        printf("\n");
    }
    printf("%d", S - fake_S);
    return 0;
}