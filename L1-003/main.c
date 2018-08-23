#include <stdio.h>

int main() {
    int number;
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    while ((number = getchar()) != '\n') {
        switch (number - 48) {
            case 0:
                zero++;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
            default:
                break;
        }
    }
    if (zero != 0)
        printf("0:%d\n", zero);
    if (one != 0)
        printf("1:%d\n", one);
    if (two != 0)
        printf("2:%d\n", two);
    if (three != 0)
        printf("3:%d\n", three);
    if (four != 0)
        printf("4:%d\n", four);
    if (five != 0)
        printf("5:%d\n", five);
    if (six != 0)
        printf("6:%d\n", six);
    if (seven != 0)
        printf("7:%d\n", seven);
    if (eight != 0)
        printf("8:%d\n", eight);
    if (nine != 0)
        printf("9:%d\n", nine);
    return 0;
}