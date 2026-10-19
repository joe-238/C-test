#include <stdio.h>
#include <stdlib.h>

int main(void){
    int area, first, second;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &first, &second);

    printf("You entered %03d.%03d.%04d\n",
           area, first, second);

    return 0;
}