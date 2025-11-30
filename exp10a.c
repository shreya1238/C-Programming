/*Name: Shreya Yadav
      Class: F.E. (Computer2)
      Batch: D
      Roll no.: 2
      UIN: 251P075
    */
    
#include<stdio.h>

int addNumbers(int *a, int*b) {
    int sum = *a + *b;
    return sum;
}

int main() {
    int num1, num2;

    printf("Enter the numbers: ");
    scaf("%d %d", &num1, &num2);

    printf("Result is: %d", addNumbers(&num1, &num2));

    return 0;
}



