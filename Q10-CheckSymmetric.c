 
// WAP to check whether the matrix is Symmetric Matrix or not

#include <stdio.h>

int main()
{
    int i, j, order;

    printf("Enter the Order of Square Matrix: ");
    scanf("%d", &order);

    int a[order][order];

    // read matrix A from user input

    for (i = 0; i < order; i++)
        for (j = 0; j < order; j++)

            printf("Enter elements of (%d,%d) matrix: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
}

// check whether matrix is symmetric or not
int flag = 1;
for (i = 0; i < order; i++)
    for (j = 0; j < order; j++)
        if (a[i][j] != a[j][i])
            flag = 0;

// print result
if (flag == 1)
    printf("Given Matrix is Symmetric.\n");
else
    printf("Given Matrix is not Symmetric.\n");

return 0;
}


#include <stdio.h>

int main()
{
    int i, j, order;

    printf("Enter the Order of Square Matrix: ");
    scanf("%d", &order);

    int a[order][order];

    // read matrix A from user input

    for (i = 0; i < order; i++)
        for (j = 0; j < order; j++) {
            printf("Enter elements of (%d,%d) matrix: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

// check whether matrix is symmetric or not
int flag = 1;
for (i = 0; i < order; i++)
    for (j = 0; j < order; j++)
        if (a[i][j] != a[j][i])
            flag = 0;

// print result
if (flag == 1)
    printf("Given Matrix is Symmetric.\n");
else
    printf("Given Matrix is not Symmetric.\n");

return 0;
}