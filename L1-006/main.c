#include <stdio.h>
#include <math.h>
#define limited 1e-8

int judge_Prime(int number) {
    int isPrime = 1;
    if (number == 2)
        return 1;
    else {
        for (int i = 2; sqrt(number) - i > limited; ++i) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
            return 1;
        else
            return 0;
    }
}
int number_factor(int j, int number) {                          //Counter of the consistent factors
    int y = 1;
    for (int i = j; sqrt(number) - i > limited; ++i) {
        if (number % i == 0 && (number/i) % (i+1) == 0) {
            y++;
            number /= i;
            if ((number/(i+1)) % (i+2) != 0) {
                break;
            }
        }
    }
    return y;
}
void factor(int j, int number) {                                //Print the consistent factors
    int only_one = 1;                                           //Judge the existance of the consistent factors
    for (int i = j; sqrt(number) - i > limited; ++i) {
        if (number % i == 0 && (number/i) % (i+1) == 0) {       //If consistent factors exist, print the former
            printf("%d*", i);
            number /= i;
            only_one = 0;                                       //Judge the existance of the consistent factors
            if ((number/(i+1)) % (i+2) != 0) {                  //If next number after the latter number is NOT constant, print the latter
                printf("%d", i+1);
            }
        }
    }
    if (only_one == 1) {                                        //If consistent factors do NOT exist, print the smallest factor of the number
        for (int i = 2; i <= number; ++i) {
            if (number % i == 0) {
                printf("%d", i);
                break;
            }
        }
    }
}
int main() {
    int number;
    scanf("%d", &number);
    if (judge_Prime(number) == 1) {
        printf("1\n");
        printf("%d", number);
    }
    else {
        int j;
        int max = number_factor(2, number);
        int max_j = 2;
        for (j = 3; sqrt(number) - j > limited; ++j) {              //Judge the longest sequence of the consistent numbers
            if (number_factor(j, number) > max) {
                max_j = j;
                max = number_factor(j, number);
                if (number_factor(j, number) <= max)
                    break;
            }
        }
        printf("%d\n", max);
        factor(max_j, number);
    }
    return 0;
}