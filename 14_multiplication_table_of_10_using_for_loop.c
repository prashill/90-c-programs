#include <stdio.h>

int main()
{
    printf("***********Multiplication table of 10*********** \n");
    
    for (int i = 0; i <= 10; i++)
    {
        printf(" 10 x %d = %d \n", i, i + i);
    }

    return 0;
}