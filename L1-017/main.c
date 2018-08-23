#include <stdio.h>

int main() {
    char first;
    char number;
    int isTwo = 0;
    double time_two = 0;
    double time_all = 0;
    double answer;
    if ((first = getchar()) != '-') {
        time_all++;
        if (first == '2') {
            isTwo = 1;
            time_two++;
        }
        while ((number = getchar()) != '\n') {
            isTwo = 0;
            if (number == '2')
                time_two++;
            if (number == '0'||number == '2'||number == '4'||number == '6'||number == '8')
                isTwo = 1;
            time_all++;
        }
        if (isTwo == 0)
            answer = (time_two/time_all)*100;
        else
            answer = (time_two/time_all)*100*2;
    }
    else {
        while ((number = getchar()) != '\n') {
            isTwo = 0;
            if (number == '2')
                time_two++;
            if (number == '0'||number == '2'||number == '4'||number == '6'||number == '8')
                isTwo = 1;
            time_all++;
        }
        if (isTwo == 0)
            answer = (time_two/time_all)*100*1.5;
        else
            answer = (time_two/time_all)*100*2*1.5;
    }
    printf("%.2lf%%", answer);
    return 0;
}