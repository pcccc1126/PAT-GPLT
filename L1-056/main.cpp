#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
double abs_f(double);
int main() {
    int N;
    cin >> N;
    char name[N][15];
    int num[N];
    for (int i = 0; i < N; ++i) {
        scanf("%s", name[i]);
        cin >> num[i];
    }
    int sum = 0;
    for (int k = 0; k < N; ++k) {
        sum += num[k];
    }
    double aver = sum/ N, min = abs_f(num[0]- aver/2);
    int min_mark = 0;
    for (int l = 1; l < N; ++l) {
        if (min- abs_f(num[l]- aver/2) > 10e-8) {
            min = abs_f(num[l]- aver/2);
            min_mark = l;
        }
    }
    printf("%.0lf %s", aver/2, name[min_mark]);
    return 0;
}
double abs_f(double num) {
    return num- 0> 10e-8? num: -num;
}