//WAP to find all even numbers in a matrix and display its count

#include <stdio.h>

int main(){
    int rows,cols;
    printf("Enter no of rows");
    scanf("%d",&rows);
    printf("Enter no of columns");
    scanf("%d",&cols);
    int matrix[rows][cols];
    int evenCount = 0;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            printf("Enter Element for position (%d,%d)",i+1,j+1);
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] % 2 == 0 ) evenCount++;
        }
    }
    printf("Total Even Number is Matrix are %d",evenCount);
}