// WAP to check whether the matrix is Identity Matrix or not.

int main()
{
    int rows, cols, flag = 0;

    printf("Enter no of rows: ");
    scanf("%d", &rows);
    printf("Enter no of columns: ");
    scanf("%d", &cols);

    int A[rows][cols];

    // Enter Matrix A elements
    printf("Elements of square matrix A\n\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            printf("Enter Element for position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    // Loop to check whether the matrix is
    // Identity Matrix or not
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j && A[i][j] != 1)
                flag = 1;
            else if (i != j && A[i][j] != 0)
                flag = 1;
        }
    }

    // If flag is 0, then Matrix is Identity
    // else not
    if (flag == 0)
        printf("A is an Identity Matrix");
    else
        printf("A is not an Identity Matrix");

    return 0;
}