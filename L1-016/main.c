#include <stdio.h>

int main() {
    int N;
    int wrongID = 0;
    scanf("%d", &N);
    getchar();
    char ID[N+1][19];
    int isWrong[N+1];
    for (int k = 0; k < N; ++k) {
        isWrong[k] = 0;
    }
    int input;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; (input = getchar()) != '\n'; ++j) {
            ID[i][j] = input;
            if (j < 17) {
                if (input < '0' || input > '9') {
                    isWrong[i] = 1;
                    wrongID++;
                }
            }
        }
    }
    int eighteen[N+1];
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char Check_code[N+1];
    for (int l = 0; l < N; ++l) {
        if (isWrong[l] == 1)
            continue;
        else {
            int sum = 0;
            for (int i = 0; i < 17; ++i) {
                sum += weight[i] * (ID[l][i] - 48);
            }
            eighteen[l] = sum % 11;
            switch (eighteen[l]) {
                case 0: Check_code[l] = '1';break;
                case 1: Check_code[l] = '0';break;
                case 2: Check_code[l] = 'X';break;
                case 3: Check_code[l] = '9';break;
                case 4: Check_code[l] = '8';break;
                case 5: Check_code[l] = '7';break;
                case 6: Check_code[l] = '6';break;
                case 7: Check_code[l] = '5';break;
                case 8: Check_code[l] = '4';break;
                case 9: Check_code[l] = '3';break;
                case 10:Check_code[l] = '2';break;
                default:break;
            }
            if (Check_code[l] != ID[l][17])
                isWrong[l] = 1;
        }
    }
    for (int m = 0; m < N; ++m) {
        if (isWrong[m] == 1) {
            for (int i = 0; i < 18; ++i) {
                printf("%c", ID[m][i]);
            }
            printf("\n");
            wrongID++;
        }
    }
    if (wrongID == 0)
        printf("All passed");
    return 0;
}