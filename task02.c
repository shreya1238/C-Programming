/*Name: Khan Soha Mohammed Amin
Class: F.E. (Computer2)
Batch: D
UIN: 251P104
*/

#include <stdio.h>

int main() {
    float physics, chemistry, maths, average;
    
    // input
    printf("Enter Physics marks: ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry);

    printf("Enter Mathematics marks: ");
    scanf("%f", &maths);

    // calculate average
    average = (physics + chemistry + maths)/3;

    // print average
    printf("Average = %2f\n", average);

    // eligibility check using conditional operator
    // if average >= 50 then “Eligible”, else “Not Eligible”
    (average >= 50) 
        ? printf("Student is eligible for admission.") :
          printf("Student is NOT eligible for admission.");

    return 0;
}


