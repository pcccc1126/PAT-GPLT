#include <stdio.h>

int main() {
    char A[10000];
    char B[10000];
    char input;
    int i = 0, j = 0;
    while ((input = getchar()) != '\n') {
        A[i] = input;
        i++;
    }
    while ((input = getchar()) != '\n') {
        B[j] = input;
        j++;
    }
    int TIME = 0;
    for (int i1 = 0; i1 < j-TIME; ++i1) {
        for (int k = i1+1; k < j-TIME; ++k) {
            if (B[i1] == B[k]) {
                for (int l = i1; l < j-TIME; ++l) {
                    B[l] = B[l + 1];
                    if (B[l] == '\0')
                        break;
                }
                k--;
                TIME++;
            }
        }
    }
    int time = 0;
    for (int k = 0; k < j - TIME; ++k) {
        for (int l = 0; l < i - time; ++l) {
            if (B[k] == A[l]) {
                for (int m = l; m < i - time; ++m) {
                    A[m] = A[m + 1];
                    if (A[m] == '\0')
                        break;
                }
                time++;
                l--;
            }
        }
    }
    for (int n = 0; n < i - time; ++n) {
        printf("%c", A[n]);
    }
    return 0;
}