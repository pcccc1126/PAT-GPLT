#include <stdio.h>

int main() {
    int telephone;
    int phone_number[12];
    int i = 0;
    while ((telephone = getchar()) != '\n') {
        phone_number[i] = telephone - 48;
        i++;
    }
    int exist[11];
    int w = 0;
    int     exist_one = 0, exist_two = 0, exist_thr = 0, exist_fou = 0, exist_fiv = 0,
            exist_six = 0, exist_sev = 0, exist_eig = 0, exist_nin = 0, exist_zer = 0;
    for (int j = 0; j <= 10; ++j) {
        if      (phone_number[j] == 9 && exist_nin == 0) { exist[w] = 9 ; w++; j = 0; exist_nin = 1;continue; }
        else if (phone_number[j] == 8 && exist_eig == 0) { exist[w] = 8 ; w++; j = 0; exist_eig = 1;continue; }
        else if (phone_number[j] == 7 && exist_sev == 0) { exist[w] = 7 ; w++; j = 0; exist_sev = 1;continue; }
        else if (phone_number[j] == 6 && exist_six == 0) { exist[w] = 6 ; w++; j = 0; exist_six = 1;continue; }
        else if (phone_number[j] == 5 && exist_fiv == 0) { exist[w] = 5 ; w++; j = 0; exist_fiv = 1;continue; }
        else if (phone_number[j] == 4 && exist_fou == 0) { exist[w] = 4 ; w++; j = 0; exist_fou = 1;continue; }
        else if (phone_number[j] == 3 && exist_thr == 0) { exist[w] = 3 ; w++; j = 0; exist_thr = 1;continue; }
        else if (phone_number[j] == 2 && exist_two == 0) { exist[w] = 2 ; w++; j = 0; exist_two = 1;continue; }
        else if (phone_number[j] == 1 && exist_one == 0) { exist[w] = 1 ; w++; j = 0; exist_one = 1;continue; }
        else if (phone_number[j] == 0 && exist_zer == 0) { exist[w] = 0 ; w++; j = 0; exist_zer = 1;continue; }
        else continue;
    }
    int max[w+1];
    for (int l = 0; l <= w-1; ++l) {
        max[l] = -1;
    }
    int max_mark[w+1];
    for (int k = 0; k <= w-1 ; ++k) {
        for (int j = 0; j <= w-1; ++j) {
            if (exist[j] > max[k]) {
                max[k] = exist[j];
                max_mark[k] = j;
            }
        }
        exist[max_mark[k]] = -1;
    }
    printf("int[] arr = new int[]{");
    for (int m = 0; m <= w-1; ++m) {
        if(m == w-1)
            printf("%d};\n", max[m]);
        else
            printf("%d,", max[m]);
    }
    printf("int[] index = new int[]{");
    for (int n = 0; n <= 10; ++n) {
        for (int j = 0; j <= w-1; ++j) {
            if (phone_number[n] == max[j]) {
                if (n == 10)
                    printf("%d};\n", j);
                else
                    printf("%d,", j);
            }
        }
    }
    return 0;
}