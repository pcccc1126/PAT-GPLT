#include <stdio.h>

int main() {
    int G_time = 0, P_time = 0, L_time = 0, T_time = 0;
    char input;
    while ((input = getchar()) != '\n') {
        if (input == 'G'||input == 'g')
            G_time++;
        else if (input == 'P'||input == 'p')
            P_time++;
        else if (input == 'L'||input == 'l')
            L_time++;
        else if (input == 'T'||input == 't')
            T_time++;
    }
    while (1) {
        if (G_time != 0) {
            printf("G");
            G_time--;
        }
        if (P_time != 0) {
            printf("P");
            P_time--;
        }
        if (L_time != 0) {
            printf("L");
            L_time--;
        }
        if (T_time != 0) {
            printf("T");
            T_time--;
        }
        if (G_time == 0 && P_time == 0 && L_time == 0 && T_time == 0)
            break;
    }
    return 0;
}