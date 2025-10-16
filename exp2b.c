#include <stdio.h>

int main() {
    int start, end;
    int sum = 0;

    // Prompt user for range limits
    printf("Enter the start and end limits: ");
    scanf("%d %d", &start, &end);

    // Loop through the range and sum odd numbers
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Output the result
    printf("Sum of odd numbers is: %d\n", sum);

    return 0;
}
