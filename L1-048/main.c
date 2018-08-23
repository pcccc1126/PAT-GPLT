#include <stdio.h>

int main() {
    int Ra, Ca, Rb, Cb;
    scanf("%d %d", &Ra, &Ca);
    getchar();
    int matrix_a[Ra][Ca];
    for (int i = 0; i <= Ra- 1; ++i) {
        for (int j = 0; j <= Ca- 1; ++j) {
            scanf("%d", &matrix_a[i][j]);
            getchar();
        }
    }
    scanf("%d %d", &Rb, &Cb);
    if (Ca != Rb) {
        printf("Error: %d != %d", Ca, Rb);
        return 0;
    }
    else {
        int matrix_b[Rb][Cb];
        for (int i = 0; i <= Rb- 1; ++i) {
            for (int j = 0; j <= Cb- 1; ++j) {
                scanf("%d", &matrix_b[i][j]);
                getchar();
            }
        }
        int matrix_answer[Ra][Cb];
        for (int i = 0; i <= Ra- 1; ++i) {
            for (int m = 0; m <= Cb- 1; ++m) {
                matrix_answer[i][m] = 0;
            }
        }
        for (int i = 0; i <= Ra- 1; ++i) {
            for (int m = 0; m <= Cb- 1; ++m) {
                for (int j = 0; j <= Ca- 1; ++j) {
                    matrix_answer[i][m] += matrix_a[i][j] * matrix_b[j][m];
                }
            }
        }
        printf("%d %d\n", Ra, Cb);
        for (int n = 0; n <= Ra- 1; ++n) {
            for (int i = 0; i < Cb- 1; ++i) {
                printf("%d ", matrix_answer[n][i]);
            }
            printf("%d\n", matrix_answer[n][Cb- 1]);
        }
        return 0;
    }
}