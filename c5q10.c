#include <stdio.h>
#include <stdlib.h>

/*
Using the switch statement, writea program that converts a numerical grade into a letter
grade:
11.
Enter numerical grade: 84
Letter grade: B
Use the following grading scale: A = 90-100, B = 80-89, С = 70–79, D = 60-69, F=0-59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
into two digits, then use a switch statement to test the ten's digit.
*/

int main() {

  printf("Input numerical grade: ");
  int grade;
  scanf("%d", &grade);
  char num;
  switch (grade / 10) {
  case 10:
  case 9:
    num = 'A';
    break;
  case 8:
    num = 'B';
    break;
  case 7:
    num = 'C';
    break;
  case 6:
    num = 'D';
    break;
  default:
    num = 'F';
    break;
  }
  printf("Letter Grade: %c", num);
  return 0;
}