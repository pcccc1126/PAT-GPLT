#include <stdio.h>

int time(int,int);
int main() {
    int N;
    scanf("%d", &N);
    int sum[N];
    for (int i = 0; i <= N- 1; ++i) {
        sum[i] = 0;
    }
    int book[1001][3];
    int day = 0;
    int hour, minute;
    char state;
    int ID;
    int all_time[N];
    for (int k = 0; k <= N- 1; ++k) {
        all_time[k] = 0;
    }
    while (day < N) {
        for (int i = 0; i <= 1000; ++i) {
            book[i][0] = 0;
            book[i][1] = 0;
            book[i][2] = 0;
        }
        while (1) {
            scanf("%d %c %d:%d", &ID, &state, &hour, &minute);
            if (ID == 0) {
                day++;
                break;
            }
            else {
                if (state == 'S') {
                    book[ID][0] = 60* hour+ minute;
                    book[ID][2] = 1;
                }
                else if (state == 'E' && book[ID][2] == 1) {
                    book[ID][1] = 60* hour+ minute;
                    sum[day]++;
                    all_time[day] += time(book[ID][0], book[ID][1]);
                    book[ID][2] = 0;
                }
            }
        }
    }
    for (int l = 0; l <= N- 1; ++l) {
        if (sum[l] == 0)
            printf("0 0\n");
        else
            printf("%d %.0lf\n", sum[l], (double)all_time[l]/sum[l]);
    }
    return 0;
}
int time(int start_minute, int end_minute) {
    return end_minute - start_minute;
}