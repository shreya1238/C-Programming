#include<stdio.h>

int main() {

    int num1, num2, choice;

    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);

    printf("Enter your choice\n");
    printf("1. Add\n");
    printf("2. Sub\n");
    printf("3. Mul\n");
    printf("4. Div\n");
    printf("5. Mod\n");

    scanf("%d", &choice);

switch(choice) {

    case 1:
    printf("Result for addition is:%d", num1 + num2);
    break;

    case 2:
    printf("Result for subtraction is:%d", num1 - num2);
    break;

    case 3:
    printf("Result for multiplication is:%d", num1 * num2);
    break;

    case 4:
    printf("Result for division is:%d", num1 / num2);
    break;

    case 5:
    printf("Result for modulo is:%d", num1 % num2);
    break;

    default:
    printf("Invalid choice");
    break;
}
    return 0;
}




