// WAP to find addition of Diagonal Elements in Matrix

#include <stdio.h>
int main()
{
    int r, c, i, j, sum = 0;

    printf("Enter the Number of Rows: ");
    scanf("%d", &r);

    printf("Enter the Number of Columns: ");
    scanf("%d", &c);

    int a[r][c];
    printf("Enter elements of matrix :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter Element for position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("Addition of diagonal elements is %d", sum);
    return 0;
}