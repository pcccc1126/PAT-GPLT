#include <stdio.h>

int main() {
    int hour, minute;
    scanf("%d:%d", &hour, &minute);
    if ((hour >= 0 && hour < 12)||(hour == 12 && minute == 0))
        printf("Only %02d:%02d.  Too early to Dang.", hour, minute);
    else {
        if (minute == 0)
            for (int i = 0; i < hour - 12; ++i) {
                printf("Dang");
            }
        else {
            for (int i = 0; i < hour - 11; ++i) {
                printf("Dang");
            }
        }
    }
    return 0;
}