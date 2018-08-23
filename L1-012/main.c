#include <stdio.h>

int index(int n) {
    int y;
    if (n == 0)
        y = 1;
    else
        y = 2 * index(n-1);
    return y;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("2^%d = %d", n, index(n));
    return 0;
}