#include <stdio.h>

int main() {
    int time;
    scanf("%d", &time);
    int number[time+1];
    for (int i = 0; i < time; ++i) {
        scanf("%d", &number[i]);
    }
    int odd = 0;
    int even = 0;
    for (int j = 0; j < time; ++j) {
        if (number[j] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("%d %d", odd, even);
    return 0;
}