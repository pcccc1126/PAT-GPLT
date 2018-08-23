#include <stdio.h>

int counter(int);
int main() {
    int year, deflection;
    scanf("%d %d", &year, &deflection);
    int old = 0;
    while (counter(year) != deflection) {
        old++;
        year++;
    }
    printf("%d %04d", old, year);
    return 0;
}
int counter(int year) {
    int number[4];
    int counter = 0;
    int answer = 0;
    for (int i = 1000; i >= 1; i /= 10) {
        number[counter] = year / i;
        year %= i;
        counter++;
    }
    for (int j = 0; j <= 2; ++j) {
        for (int i = j + 1; i <= 3; ++i) {
            if (number[j] == number[i]) {
                number[i] = -1;
            }
        }
    }
    for (int j = 0; j <= 3; ++j) {
        if (number[j] >= 0)
            answer++;
    }
    return answer;
}