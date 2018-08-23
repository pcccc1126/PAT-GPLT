#include <stdio.h>

int main() {
    int counter = 0;
    int input;
    while (1) {
        scanf("%d", &input);
        counter++;
        if (input == 250)
            break;
    }
    printf("%d", counter);
    return 0;
}