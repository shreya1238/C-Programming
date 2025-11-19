/*Name: Shreya Yadav
      Class: F.E. (Computer2)
      Batch: D
      Roll no.: 2
      UIN: 251P075
    */

#include <stdio.h>

void addMatrix(int mat1[2][2], int mat2[2][2], int sum[2][2]) {

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
        sum[i][j] = mat1[i][j] + mat2[i][j];    

        }
    }
}
int main () {
    int m1[2][2], m2[2][2], result[2][2];
    printf("Enter The Value Matrix1 :");
    for(int i = 0; i < 2; i++){
        for(int j = 0;j < 2; j++){
            scanf("%d", &m1[i][j]);
        }
    }
     printf("Enter The Value Matrix2 :");
    for(int i = 0; i < 2; i++){
        for(int j = 0;j < 2; j++){
            scanf("%d", &m2[i][j]);
        }
    }
    addMatrix(m1, m2, result);
        printf("Result:\n");

    for(int i = 0; i< 2; i++){
        for(int j = 0;j < 2; j++){
            printf("%d ", result[i][j]);
    }
    printf("\n");
    }
    return 0;
}





