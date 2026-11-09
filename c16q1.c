#include <stdio.h>
/*
Write a program that asks the user to enter an international dialing code and then looks it up
in the country codes array (see Section 16.3). If it finds the code, the program should
display the name of the corresponding country; if not, the program should print an error
message.
*/

int main(void)
{
    int code;
    int i;

    int country_codes[] = {
        1, 7, 20, 27, 30, 31, 32, 33, 34, 36,
        39, 40, 41, 43, 44, 45, 46, 47, 48, 49
    };

    char *countries[] = {
        "United States/Canada", "Russia", "Egypt", "South Africa",
        "Greece", "Netherlands", "Belgium", "France", "Spain",
        "Hungary", "Italy", "Romania", "Switzerland", "Austria",
        "United Kingdom", "Denmark", "Sweden", "Norway",
        "Poland", "Germany"
    };

    printf("Enter an international dialing code: ");
    scanf("%d", &code);

    for (i = 0; i < 20; i++)
    {
        if (country_codes[i] == code)
        {
            printf("Country: %s\n", countries[i]);
            return 0;
        }
    }

    printf("Error: Country code not found.\n");

    return 0;
}