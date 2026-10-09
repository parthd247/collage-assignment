#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is a positive number.\n", num);
    }
    else if (num < 0)
    {
        printf("%d is a negative number.\n", num);
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}
Output 1: Positive Number
text
Enter a number: 10
10 is a positive number.
Output 2: Negative Number
text
Enter a number: -5
-5 is a negative number.
Output 3: Zero
text
Enter a number: 0
The number is zero.
