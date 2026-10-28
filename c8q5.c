#include <stdio.h>
#include <stdlib.h>

/*
Modify the interest .c program of Section 8.1 so that it compounds interest monthly
instead of annually. The form of the output shouldn't change; the balance should still be
shown at annual intervals.
*/

int main(void){
    double balance, interest_rate;
    int years;

    printf("Enter initial balance: ");
    scanf("%lf", &balance);
    printf("Enter annual interest rate (in percent): ");
    scanf("%lf", &interest_rate);
    printf("Enter number of years: ");
    scanf("%d", &years);

    interest_rate /= 100; // Convert percentage to decimal

    printf("\nYear\tBalance\n");
    for (int year = 1; year <= years; year++) {
        for (int month = 0; month < 12; month++) {
            balance += balance * (interest_rate / 12); // Monthly compounding
        }
        printf("%d\t%.2f\n", year, balance);
    }

    return 0;
}
