/*Name: Shreya Yadav
      Class: F.E. (Computer2)
      Batch: D
      Roll no.: 2
      UIN: 251P075
    */

#include<stdio.h>

void counter() {
    static int count = 0;
    count ++;
    printf("Count = %d\n", count);
}

int main() {
    counter();
    counter();
    counter();

    return 0;
}




