#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial of %d = %d\n", n, result);

    return 0;
}
Sample Output
text
Enter a number: 5
Factorial of 5 = 120

