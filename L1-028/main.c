#include <stdio.h>
#include <math.h>
#define limited 1e-8

int isPrime(int);
int main() {
    int time;
    scanf("%d", &time);
    for (int i = 1; i <= time; ++i) {
        int input;
        scanf("%d", &input);
        switch (isPrime(input)) {
            case 0:
                printf("No\n");
                continue;
            case 1:
                printf("Yes\n");
                continue;
            default:
                break;
        }
    }
    return 0;
}
int isPrime(int number) {
    if (number == 1)
        return 0;
    else if (number == 2)
        return 1;
    else{
        for (double i = 2; i - sqrt(number) < limited; i++) {
            if (number % (int)i == 0)
                return 0;
        }
        return 1;
    }
}