#include <stdio.h>

double male(double);
double female(double);
void output(char*, int, double*);
int main() {
    int N;
    scanf("%d", &N);
    getchar();
    char sex[N];
    double height[N];
    for (int i = 0; i <= N- 1; ++i) {
        scanf("%c %lf", &sex[i], &height[i]);
        getchar();
    }
    output(sex, N, height);
    return 0;
}
double male(double h) {
    return h/ 1.09;
}
double female(double h) {
    return h* 1.09;
}
void output(char sex[], int N, double height[]) {
    for (int j = 0; j <= N- 1; ++j) {
        switch (sex[j]) {
            case 'M':
                printf("%.2lf\n", male(height[j]));
                continue;
            case 'F':
                printf("%.2lf\n", female(height[j]));
                continue;
            default:
                continue;
        }
    }
}