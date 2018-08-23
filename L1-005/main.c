#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();
    char ID[N+1][15];
    int temporary[N+1];
    int permanent[N+1];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 14; ++j) {
            scanf("%c", &ID[i][j]);
        }
        getchar();
        scanf("%d %d", &temporary[i], &permanent[i]);
        getchar();
    }
    int M;
    scanf("%d", &M);
    getchar();
    int find_temporary[M+1];
    for (int j = 0; j < M; ++j) {
        scanf("%d", &find_temporary[j]);
        getchar();
    }
    char found_ID[M+1][15];
    int found_permanent[M+1];
    int time = 0;
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            if (find_temporary[k] == temporary[i]) {
                for (int j = 0; j < 14; ++j) {
                    found_ID[time][j] = ID[i][j];
                }
                found_permanent[time] = permanent[i];
                time++;
            }
        }
    }
    for (int l = 0; l < M; ++l) {
        for (int i = 0; i < 14; ++i) {
            printf("%c", found_ID[l][i]);
        }
        printf(" %d\n", found_permanent[l]);
    }
    return 0;
}