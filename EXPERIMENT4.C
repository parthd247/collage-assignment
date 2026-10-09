#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
Output 1: Even Number
text
Enter a number: 10
10 is an even number.
Output 2: Odd Number
text
Enter a number: 7
7 is an odd number.
