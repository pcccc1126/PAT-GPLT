#include <stdio.h>

int main() {
    int max_A, max_B;
    scanf("%d %d", &max_A, &max_B);
    int time;
    scanf("%d", &time);
    int shout_A[time+1], do_A[time+1], shout_B[time+1], do_B[time+1];
    for (int i = 0; i < time; ++i) {
        scanf("%d %d %d %d", &shout_A[i], &do_A[i], &shout_B[i], &do_B[i]);
    }
    int drunk_A = 0, drunk_B = 0;
    int win_A = 1, win_B = 1;
    for (int j = 0; j < time; ++j) {
        if (do_A[j] == shout_A[j] + shout_B[j] &&do_B[j] == shout_A[j] + shout_B[j] ) {
            continue;
        }
        else if (do_A[j] == shout_A[j] + shout_B[j]) {
            drunk_A++;
            if (drunk_A > max_A) {
                win_A = 0;
            }
        }
        else if (do_B[j] == shout_A[j] + shout_B[j]) {
            drunk_B++;
            if (drunk_B > max_B) {
                win_B = 0;
            }
        }
        if (win_A == 0 || win_B == 0)
            break;
    }
    if (win_A == 0 && win_B == 0)
        printf("A B\n");
    else if (win_A == 0)
        printf("A\n%d", drunk_B);
    else
        printf("B\n%d", drunk_A);
    return 0;
}