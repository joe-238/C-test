#include <stdio.h>
#include <stdlib.h>

/*Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
form:
W
W
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
Be careful not to display 12:00 as 0:00.*/

int main(void) {
    int hour, minute;
    printf("Enter a 24-hour time: (example 21:11)");
    scanf("%d:%d", &hour, &minute);

    char end[3];
    strcpy(end, "AM");

    if (hour > 12){
        hour -= 12;
        strcpy(end, "PM");
    } else if (hour == 0) {
        hour = 12;     
    }
    printf("%.2d:%.2d %s", hour, minute, end);

    return 0;
}