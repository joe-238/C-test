#include <stdio.h>
#include <stdlib.h>
//write a program that asks the user to enter a dollar and cents amount (for example, 11.56) and then displays the amount in dollars and cents with 5% tax added.

int main(void) {
    double amount, total;
    printf("Enter a dollar and cents amount (for example, 11.56): ");
    scanf("%lf", &amount); //read the user input as a double
    total = amount * 1.05;
    printf("The amount with 5%% tax added is: $%.2lf\n", total);
    return 0;
}
