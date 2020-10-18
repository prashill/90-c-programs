#include <stdio.h>

int main()

{
    // Question
    // calaculate income tax paid by an employee to the government
    // as per the slabs mentioned below
    // if income is in between 0l to 2.49l
    // if income in between 2.50l to 5.0l 5%tax
    // if income is in between 5.0l to 10.0l 20% tax
    // if income is in between above 10.0l 30% tax
    // note: there is no tax below 2.5lakh of income.
    // take income amount from user
    

    float income;

    printf("Enter your Yearly Income in lakh: \n", income);
    scanf("%f", &income);

    if (income > 10.0)
    {
        printf("You need to pay 30percentage tax, because Your yearly income is %f lakh", income);
    }

    else if (income > 2.49 && income < 5.0)
    {
        printf(" You need to pay 5percentage tax, because Your yearly income is %f lakh", income);
    }

    else if (income > 5.0 && income < 10.0)
    {
        printf(" You need to pay 20percentage tax, because Your yearly income is %f lakh", income);
    }

    else
    {
        printf(" You don't need to pay any tax, because Your yearly income is %f lakh", income);
    }

    return 0;
}