#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int tab[1000];
    for (int j = 0; j <= 999; ++j) {
        tab[j] = 0;
    }
    for (int i = 1; i <= N; ++i) {
        int time, input;
        scanf("%d", &time);
        for (int j = 1; j <= time; ++j) {
            scanf("%d", &input);
            tab[input-1]++;
        }
    }
    int max = tab[0];
    int max_id = 1;
    int k;
    for (k = 0; k <= 999; ++k) {
        if (tab[k] >= max) {
            max = tab[k];
            max_id = k + 1;
        }
    }
    printf("%d %d", max_id, max);
    return 0;
}