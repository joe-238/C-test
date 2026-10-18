#include <stdio.h>
#include <stdlib.h>
// write a program to evaluate the polynomial 3x^5 + 2x^4 -5x^3 -x^2 +7x -6

int main(void) {
    double x, result;
    printf("enter a value for x for the equation 3x^5 + 2x^4 -5x^3 -x^2 +7x -6: ");
    scanf("%lf", &x);
    result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("The result of the equation is: %.2lf\n", result);
    return 0;
}