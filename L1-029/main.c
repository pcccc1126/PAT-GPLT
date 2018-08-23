#include <stdio.h>

int main() {
    int weight;
    scanf("%d", &weight);
    printf("%.1lf", (weight-100)*0.9*2);
    return 0;
}