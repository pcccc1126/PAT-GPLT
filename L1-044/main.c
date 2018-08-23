#include <stdio.h>
#include <string.h>

int main() {
    int K;
    scanf("%d", &K);
    char input[10];
    int counter = 0;
    while (1) {
        counter++;
        scanf("%s", input);
        if (counter % (K+1) != 0 || counter == 0) {
            if (strcmp(input, "End") == 0)
                return 0;
            else if (strcmp(input, "ChuiZi") == 0)
                printf("Bu\n");
            else if (strcmp(input, "JianDao") == 0)
                printf("ChuiZi\n");
            else if (strcmp(input, "Bu") == 0)
                printf("JianDao\n");
        }
        else {
            if (strcmp(input, "End") == 0)
                return 0;
            else
                printf("%s\n", input);
        }
    }
}