#include <stdio.h>

int factorial(int n) {
    int y;
    if (n == 0)
        y = 1;
    else
        y = n * factorial(n-1);
    return y;
}
int main() {
    int N;
    scanf("%d", &N);
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += factorial(i);
    }
    printf("%d", sum);
    return 0;
}