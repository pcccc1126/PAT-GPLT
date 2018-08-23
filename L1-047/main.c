#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char name[N][10];
    int heartbeat[N], pulse[N];
    for (int i = 0; i <= N- 1; i++) {
        scanf("%s", &name[i]);
        scanf("%d %d", &heartbeat[i], &pulse[i]);
        getchar();
    }
    for (int j = 0; j <= N- 1; ++j) {
        if ((heartbeat[j]< 15|| heartbeat[j]> 20)|| (pulse[j]< 50|| pulse[j]> 70))
            printf("%s\n", name[j]);
    }
    return 0;
}