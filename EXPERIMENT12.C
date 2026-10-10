#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
 Output
text
Enter the number of elements: 5
Enter the array elements:
10 20 30 40 50
Sum of all elements = 150
