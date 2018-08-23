#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char mark, input;
    getchar();
    scanf("%c", &mark);
    getchar();
    char ch[N];
    int i = 0;
    while ((input = getchar()) != '\n') {
        if (i <= N - 1) {
            ch[i] = input;
            i++;
        }
        else {
            for (int j = 0; j <= N - 2; ++j) {
                ch[j] = ch[j + 1];
            }
            ch[N - 1] = input;
        }
    }
    if (i > N - 1) {
        for (int j = 0; j <= N - 1; ++j) {
            printf("%c", ch[j]);
        }
    }
    else {
        for (int j = 0; j < N - i; ++j) {
            printf("%c", mark);
        }
        for (int k = 0; k <= i - 1; ++k) {
            printf("%c", ch[k]);
        }
    }
    return 0;
}