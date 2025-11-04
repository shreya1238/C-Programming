/*Name: Shreya Yadav
      Age: 17
      Class: F.E. (Computer2)
      Batch: D
      UIN: 251P075
    */
#include<stdio.h>

int iterative_fact(int num) {
    int fact = 1;
    for(int i = num; i>= 1; i--) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int a = 5;
    printf(" Factorial of %d is %d", a, iterative_fact(a));

    return 0;
}

int fact(int num) {
    if(num == 0 || num == 1) {
        return 1;
    } else {
        return num * fact(num - 1);
    }
     return 0;
}

