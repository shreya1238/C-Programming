/*Name: Shreya Yadav
      Class: F.E. (Computer2)
      Batch: D
      Roll no.: 2
      UIN: 251P075
    */
#include<stdio.h>
int main () {
    int start, end, i, j;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for(i = start; i<= end; i++) {
        if(i < 2)
        continue;
    for(j = 2; j <= i / 2; j++) {
        if(i % j == 0)
        break;
    }
    if (j > i / 2)
    printf("%d ", i);
    }
    return 0;
}


