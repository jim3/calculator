// import the required header files
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // declare variables for the numbers and the result
    int add, sub, mult, div;

    // prompt for the numbers
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ");

    // get the choice
    int choice;
    scanf("%d", &choice);

    // get the numbers
    int num1;
    int num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // perform the operation
    switch (choice) {
        case 1:
            add = num1 + num2;
            printf("The sum of %d and %d is %d\n", num1, num2, add);
            break;
        case 2:
            sub = num1 - num2;
            printf("The difference of %d and %d is %d\n", num1, num2, sub);
            break;
        case 3:
            mult = num1 * num2;
            printf("The product of %d and %d is %d\n", num1, num2, mult);
            break;
        case 4:
            div = num1 / num2;
            printf("The quotient of %d and %d is %d\n", num1, num2, div);
            break;
        default:
            printf("Invalid choice\n");
    }
    
    printf("Do you want to perform another operation? (y/n): ");
    scanf("%c", &choice2);

    return 0;
}
