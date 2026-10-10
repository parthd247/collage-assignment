#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    /* Matrix addition */
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
Sample Output
text
Enter the number of rows and columns: 2 2
Enter the elements of first matrix:
1 2
3 4
Enter the elements of second matrix:
5 6
7 8
Resultant matrix:
6       8
10      12
