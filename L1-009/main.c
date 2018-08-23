#include <stdio.h>

long int Euclidean_algorithm(long int x1, long int x2) /* x1 > x2 */ {
    long int Remainder;
    do {
        Remainder = x1 % x2;
        x1 = x2;
        x2 = Remainder;
    } while (Remainder != 0);
    return x1;
}
long int smallest_common_multiple(long int x1, long int x2) {
    long int multiple;
    multiple = (x1 * x2)/Euclidean_algorithm(x1, x2);
    return multiple;
}
int main() {
    int N;
    scanf("%d", &N);
    long int numerator[N+1];
    long int denominator[N+1];
    for (int i = 0; i < N; ++i) {
        scanf("%ld/%ld", &numerator[i], &denominator[i]);
    }
    long int common_multiple = 1;
    for (int j = 0; j < N; ++j) {
        common_multiple = smallest_common_multiple(common_multiple, denominator[j]);
    }
    for (int k = 0; k < N; ++k) {
        numerator[k] *= common_multiple/denominator[k];
    }
    long int sum = 0;
    for (int l = 0; l < N; ++l) {
        sum += numerator[l];
    }
    long int integer;
    long int fraction_early;
    long int fraction;
    integer = sum / common_multiple;
    fraction_early = sum % common_multiple;
    if (fraction_early != 0) {
        fraction = fraction_early / Euclidean_algorithm(common_multiple, fraction_early);
        common_multiple = common_multiple / Euclidean_algorithm(common_multiple, fraction_early);
    }
    else {
        fraction = 0;
    }
    if (fraction != 0 && integer != 0)
        printf("%ld %ld/%ld", integer, fraction, common_multiple);
    else if (integer == 0 && fraction != 0)
        printf("%ld/%ld", fraction, common_multiple);
    else
        printf("%ld", integer);
    return 0;
}