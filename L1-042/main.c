#include <stdio.h>

int main() {
    int month, day, year;
    scanf("%d-%d-%d", &month, &day, &year);
    printf("%04d-%02d-%02d", year, month, day);
    return 0;
}