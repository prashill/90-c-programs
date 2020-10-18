#include <stdio.h>

int main()
{
    // write a program to print first n natural number using for loop

    int i, n;

    printf("Enter any number: ", n);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("The natural number is: %d \n ", i + 1);
    }

    return 0;
}