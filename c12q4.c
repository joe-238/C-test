#include <stdio.h>
#include <ctype.h>

/*
simplify programming proj 2(b) by taking advantage of the fact that an array name can be used as a pointer
*/

int main(void)
{
    char message[100];
    char *p, *q;

    printf("Enter a message: ");
    // Read the user's message and store it in the message array
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