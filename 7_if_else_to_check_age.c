#include <stdio.h>


int main()
{
    int age;

    printf("Enter your age:",age);
    scanf("%d",&age);

    if (age>=90)
    {
        printf("You are too old, You can't drive");
    }
   
    else if (age<18)
    {
        printf("You are too young, You can't drive");
    }
    
    else
    {
        printf("you can drive");
    }
    
    
    
    



    
    return 0;
}
