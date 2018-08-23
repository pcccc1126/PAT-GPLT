#include <stdio.h>
#include <math.h>

int main() {
    char number;
    int D_A = 0, D_B = 0;
    int A_is_number = 1, B_is_number = 1;
    int j = 0, n = 0;
    while ((number = getchar()) != ' ') {
        if (number < '0' || number > '9') {
            A_is_number = 0;
            continue;
        }
        else {
            D_A += (number - 48) * pow(10,j);
            j++;
        }
    }
    while ((number = getchar()) != '\n') {
        if (number < '0' || number > '9') {
            B_is_number = 0;
            break;
        }
        else {
            D_B += (number - 48) * pow(10,n);
            n++;
        }
    }
    int A = 0, B = 0;
    if (A_is_number == 1 && B_is_number == 1) {
        while (D_A > 0) {
            A += (int)((D_A % 10) * pow(10, j-1));
            j--;
            D_A /= 10;
        }
        while (D_B > 0) {
            B += (int)((D_B % 10) * pow(10, n-1));
            n--;
            D_B /= 10;
        }
        if (A > 0 && A <= 1000 && B > 0 && B <= 1000)
            printf("%d + %d = %d", A, B, A+B);
        else if ((A > 0 && A <= 1000) && (B <= 0 || B > 1000))
            printf("%d + ? = ?", A);
        else if ((B > 0 && B <= 1000) && (A <= 0 || A > 1000))
            printf("? + %d = ?", B);
        else
            printf("? + ? = ?");
    }
    else if (A_is_number == 1 && B_is_number == 0) {
        while (D_A > 0) {
            A += (int)((D_A % 10) * pow(10, j-1));
            j--;
            D_A /= 10;
        }
        if (A > 0 && A <= 1000)
            printf("%d + ? = ?", A);
        else
            printf("? + ? = ?");
    }
    else if (B_is_number == 1 && A_is_number == 0) {
        while (D_B > 0) {
            B += (int)((D_B % 10) * pow(10, n-1));
            n--;
            D_B /= 10;
        }
        if (B > 0 && B <= 1000)
            printf("? + %d = ?", B);
        else
            printf("? + ? = ?");
    }
    else if (A_is_number == 0 && B_is_number == 0) {
        printf("? + ? = ?");
    }
    return 0;
}