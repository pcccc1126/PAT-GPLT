#include <stdio.h>
#include <string.h>

void Input(char a[]);
void Output(char a[], int);
int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char input[10000];
    Input(input);
    int length = (int)strlen(input);
    if (length % n != 0) {
        for (int i = length; i <= (length/ n + 1)* n - 1; ++i) {
            input[i] = ' ';
        }
    }
    Output(input, n);
    return 0;
}
void Input(char a[]) {
    int i = 0;
    char input;
    while ((input = getchar()) != '\n') {
        a[i] = input;
        i++;
    }
}
void Output(char a[], int n) {
    int number = (int)strlen(a)- 1;
    for (int j = 0; j <= n-1; ++j) {
        for (int i = number; i >= 0; --i) {
            if (i % n == j)
                printf("%c", a[i]);
        }
        if (j != n-1)
            printf("\n");
    }
}