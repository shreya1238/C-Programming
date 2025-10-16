/* Name: Shreya Yadav
Class: F.E. (Computer2)
Batch: D
UIN: 251P075 */
#include <stdio.h>

int main() {
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The given number is Even.\n", num);
    } else {
        printf("The given number is Odd.\n", num);
    }
  return 0;
}

