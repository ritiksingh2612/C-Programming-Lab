 // Topic: Basic I/O Functions Using Different Data Types
#include <stdio.h>

int main()
{
    int age;
    float marks;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\nAge = %d", age);
    printf("\nMarks = %.2f", marks);
    printf("\nGrade = %c\n", grade);

    return 0;
}