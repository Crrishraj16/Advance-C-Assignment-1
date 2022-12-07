//WAP to check whether the matrix is Lower Triangular Matrix or not.

//Program starts
#include<stdio.h>
int main()
{
    int i, j,order;

    printf("Enter the order of Square Martix : ");
    scanf("%d", &order);

   
    int a[order][order];
    int flag = 1;
   
    for (i = 0; i < order; i++)
        for (j = 0; j < order; j++){
             printf("Enter elements of (%d,%d) matrix: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
        {
            if (i < j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        printf("Matrix is a Lower Triangular Matrix.\n");
    else
        printf("Matrix is not a Lower Triangular Matrix.\n");
    return 0;
}
//Program ends