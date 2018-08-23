#include <stdio.h>

int main() {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    if (x1 >= x2 && x1 >= x3 && x2 >= x3)
        printf("%d->%d->%d", x3, x2, x1);
    else {
        if (x1 >= x2 && x1 >= x3 && x3 >= x2)
            printf("%d->%d->%d", x2, x3, x1);
        else {
            if (x2 >= x1 && x2 >= x3 && x1 >= x3)
                printf("%d->%d->%d", x3, x1, x2);
            else {
                if (x2 >= x1 && x2 >= x3 && x3 >= x1)
                    printf("%d->%d->%d", x1, x3, x2);
                else {
                    if (x3 >= x1 && x3 >= x2 && x1 >= x2)
                        printf("%d->%d->%d", x2, x1, x3);
                    else {
                        if (x3 >= x1 && x3 >= x2 && x2 >= x1)
                            printf("%d->%d->%d", x1, x2, x3);
                    }
                }
            }
        }
    }
    return 0;
}