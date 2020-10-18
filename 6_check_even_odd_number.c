#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a number: ", a);
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("You had entered Even Number ");
    }
    else
    {
        printf("You had entered odd number");
    }

    return 0;
}
