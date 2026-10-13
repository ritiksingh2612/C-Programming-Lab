#include <stdio.h>

int main(void) {
    int choice;
    double a, b;

    do {
        printf("\n--- Menu-Driven Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Result = %.2lf\n", a + b);
                break;
            case 2:
                printf("Result = %.2lf\n", a - b);
                break;
            case 3:
                printf("Result = %.2lf\n", a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2lf\n", a / b);
                }
                break;
            case 0:
                printf("Calculator closed.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
