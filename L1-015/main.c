#include <stdio.h>

int main() {
    int time;
    char sign;
    scanf("%d %c", &time, &sign);
    int number;
    if (time % 2 == 0) {
        number = time / 2;
    }
    else {
        number = time / 2 + 1;
    }
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < time; ++j) {
            printf("%c", sign);
        }
        printf("\n");
    }
    return 0;
}