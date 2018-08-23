#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();
    char male[N/2+1][9];
    char female[N/2+1][9];
    int student[N+1];
    int m = 0, n = 0;
    for (int i = 0; i <= N-1; ++i) {
        if(getchar() == '0') {
            scanf("%s", &female[m]);
            getchar();
            student[i] = 0;
            m++;
        }
        else {
            scanf("%s", &male[n]);
            getchar();
            student[i] = 1;
            n++;
        }
    }
    int p = 0, q = 0;
    for (int j = 0; j <= N/2-1; ++j) {
        if (student[j] == 0) {
            printf("%s %s\n", female[p], male[N/2-1-p]);
            p++;
        }
        else {
            printf("%s %s\n", male[q], female[N/2-1-q]);
            q++;
        }
    }
    return 0;
}