#include <stdio.h>
#include <stdlib.h>

/*
(a) Write a program that reads a message, then prints the reversal of the message:
Enter a message: Don't get mad, get even.
Reversal is: neve teg , dam teg t'noD
Hint: Read the message one character at a time (using get char) and store the characters in
an array. Stop reading when the array is full or the character read is ' \ n ' .
(b) Revise the program to use a pointer instead of an integer to keep track of the current
position in the array.
*/

int main(void) {
    char message[100];
    char *ptr = message; // Pointer to keep track of the current position in the array

    printf("Enter a message: ");
    while (ptr < message + sizeof(message) - 1) { // Ensure we don't overflow the array
        int ch = getchar();
        if (ch == '\n') {
            break; // Stop reading on newline
        }
        *ptr++ = (char)ch; // Store character and move pointer
    }
    *ptr = '\0'; // Null-terminate the string

    printf("Reversal is: ");
    for (char *rev_ptr = ptr - 1; rev_ptr >= message; rev_ptr--) {
        putchar(*rev_ptr); // Print characters in reverse order
    }
    putchar('\n');

    return 0;
}