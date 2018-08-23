#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b > 0)
        printf("%d/%d=%.2lf", a, b, (double)a/b);
    else if (b < 0)
        printf("%d/(%d)=%.2lf", a, b, (double)a/b);
    else
        printf("%d/%d=Error", a, b);
    return 0;
}