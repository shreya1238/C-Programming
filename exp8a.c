/*Name: Shreya Yadav
      Class: F.E. (Computer2)
      Batch: D
      Roll no.: 2
      UIN: 251P075
    */
    
#include <stdio.h>

int main() {
   char str[100];
   int i = 0;

   printf("Enter a string: ");
   scanf("%s", str);

   while (str[i] != '\0') {
       i++;
   }
   printf("Lenth = %d", i);
    return 0;
}




