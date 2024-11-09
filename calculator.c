#include <stdio.h>

void add(float num1, float num2) {
    printf("Result: %.2f\n", num1 + num2);
}

void subtract(float num1, float num2) {
    printf("Result: %.2f\n", num1 - num2);
}

void multiply(float num1, float num2) {
    printf("Result: %.2f\n", num1 * num2);
}

void divide(float num1, float num2) {
    if (num2 != 0) {
        printf("Result: %.2f\n", num1 / num2);
    } else {
        printf("Error! Division by zero.\n");
    }
}

int main() {
    int choice;
    float num1, num2;

    while (1) {
        
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice (1/2/3/4/5): ");
        scanf("%d", &choice);

        
        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    }

    return 0;
}
