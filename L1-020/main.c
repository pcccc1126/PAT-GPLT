#include <stdio.h>

int main() {
    int N;
    int space;
    int member[100000];
    for (int j = 0; j <= 99999; ++j) {
        member[j] = 0;
    }
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        int n;
        scanf("%d", &n);
        if (n != 1) {
            for (int j = 0; j <= n-1; ++j) {
                int ID;
                scanf("%d", &ID);
                member[ID] = 1;
            }
        }
        else {
            scanf("%d", &space);
        }
    }
    int time;
    int have = 0;
    scanf("%d", &time);
    int testID;
    for (int k = 0; k <= time-1; ++k) {
        scanf("%d", &testID);
        if (member[testID] == 0 && have == 0) {
            printf("%05d", testID);
            member[testID] = 1;
            have = 1;
        }
        else if(member[testID] == 0 && have == 1) {
                printf(" %05d", testID);
                member[testID] = 1;
                have = 1;
        }
    }
    if (have == 0)
        printf("No one is handsome");
    return 0;
}