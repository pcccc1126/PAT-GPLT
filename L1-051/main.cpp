#include <iostream>
#include <cstdio>

int main() {
    double value, discount;
    scanf("%lf %lf", &value, &discount);
    printf("%.2lf", value*discount/10);
    return 0;
}