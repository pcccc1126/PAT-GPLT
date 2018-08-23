#include <stdio.h>
#include <math.h>

void Judge(double, double);
int main() {
    int N;
    scanf("%d", &N);
    double height[N+1], weight[N+1];
    for (int i = 0; i <= N-1; ++i) {
        scanf("%lf %lf", &height[i], &weight[i]);
    }
    for (int j = 0; j <= N-1; ++j) {
        Judge(height[j], weight[j]);
    }
    return 0;
}
void Judge(double H, double W) {
    if (fabs(W - (H - 100) * 1.8) < (H - 100) * 0.18)
        printf("You are wan mei!\n");
    else if (W - (H - 100) * 1.8 >= (H - 100) * 0.18)
        printf("You are tai pang le!\n");
    else
        printf("You are tai shou le!\n");
}