#include <stdio.h>
#include <ctype.h>

/*
(a) Write a program that reads amessage, then checks whether it's a palindrome (the letters
in the message are the same from left to right as from right to left):
Enter a message: He lived as a devil, eh?
Palindrome
Enter a message: Madam, I am Adam.
Not a palindrome
Ignore all characters that aren't letters. Use integer variables to keep track of positions in the
array.
(b) Revise the program to use pointers instead of integers to keep track of positions in the
array.
*/

int main(void)
{
    char message[100];
    int i, j;

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Find the last character
    for (j = 0; message[j] != '\0'; j++)
        ;
    j--;

    // Compare letters from both ends
    i = 0;

    while (i < j) {
        while (i < j && !isalpha(message[i]))
            i++;

        while (i < j && !isalpha(message[j]))
            j--;

        if (tolower(message[i]) != tolower(message[j])) {
            printf("Not a palindrome\n");
            return 0;
        }

        i++;
        j--;
    }

    printf("Palindrome\n");

    return 0;
}


int main(void)
{
    char message[100];
    char *p, *q;

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Find the end of the message
    for (q = message; *q != '\0'; q++)
        ;

    q--;

    p = message;

    // Compare letters from both ends
    while (p < q) {
        while (p < q && !isalpha(*p))
            p++;

        while (p < q && !isalpha(*q))
            q--;

        if (tolower(*p) != tolower(*q)) {
            printf("Not a palindrome\n");
            return 0;
        }

        p++;
        q--;
    }

    printf("Palindrome\n");

    return 0;
}