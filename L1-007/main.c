#include <stdio.h>

void pinyin(int N) {
    switch (N) {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        default:
            break;
    }
}
int power(int N) {
    int y;
    if (N == 0)
        y = 1;
    else {
        y = 10 * power(N-1);
    }
    return y;
}
int main() {
    int number;
    scanf("%d", &number);
    if (number < 0) {
        printf("fu ");
        number = -number;
    }
    int fake_number = number;
    int time;
    for (time = 0; fake_number > 0; ++time) {
        fake_number /= 10;
    }
    for (int i = time-1; i > 0; --i) {
        pinyin(number/power(i));
        number %= power(i);
        printf(" ");
    }
    pinyin(number);
    return 0;
}