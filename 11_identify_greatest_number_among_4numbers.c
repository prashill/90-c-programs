#include <stdio.h>

int main()
{
    //Question
    // write a program to find greatest of four numbers 
    // entered by the user.


    int a, b, c, d;

    printf("Enter Your first number: ", a);
    scanf("%d", &a);

    printf("Enter Your second number: ", b);
    scanf("%d", &b);

    printf("Enter Your third number: ", c);
    scanf("%d", &c);

    printf("Enter Your fourth number: ", d);
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("Your Greatest number is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("Your Greatest Number is %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("Your Greatest Number is %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("Your Greatest Number is %d", d);
    }

    else
    {
        printf("Please Enter the Number");
    }

    return 0;
}