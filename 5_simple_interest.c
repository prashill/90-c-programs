#include <stdio.h>


int main()
{

    // formula of  final amount= P (1 + rt) ,
    // p=principle ,
    // r=rate on interest,
    // t= time1

    int principle, rate, year;

    printf("Enter Principle amount: ");
    scanf("%d", &principle);

    printf("Enter an Interest Rate: ");
    scanf("%d", &rate);

    printf("Enter number of Years: ");
    scanf("%d", &year);

    int simple_interest = (principle*rate*year)/100;
    printf("Simple Interest is : %d \n", simple_interest);


    int final_amount = principle+(principle*rate*year)/100;
    printf("Final Amount is : %d", final_amount);

    return 0;
}