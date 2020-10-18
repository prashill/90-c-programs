#include <stdio.h>

int main()
{
    // Question
    //write a program to find out whether a student is pass or fail;
    // if ir requires total 40% and at least 33% in each suject to
    // pass assume 3subjects and take marks as an input from the user.

    int sub1, sub2, sub3, total;

    printf("Enter Your marks in Subject 1: ", sub1);
    scanf("%d", &sub1);

    printf("Enter Your marks in Subject 2: ", sub2);
    scanf("%d", &sub2);

    printf("Enter Your marks in Subject 3: ", sub3);
    scanf("%d", &sub3);

    total = (sub1 + sub2 + sub3) / 3;

    if ((total > 40) && sub1 > 33 && sub2 > 33 && sub3 > 33)
    {
        printf("Congrats You are successfully pass this exam, Your Percentage is %d", total);
    }

    else
    {
        printf("try again, You are Fail, Your Percentage is %d", total);
    }

    return 0;
}