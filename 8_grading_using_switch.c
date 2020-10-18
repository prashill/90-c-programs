#include<stdio.h>

int main(){
    
    int a;
    printf("Enter Your marks: ");
    scanf("%d",&a);
    
    if (a>100)
    {
        printf("not possible");
    }

    else
    {
        switch (a/10)
        {
        

        // if the marks is 100-90
        case 9: 
            printf("Congrats Your grade is  A \n"); 
            break;

        // if the marks is 80-89
        case 8: 
            printf("Your grade is B \n");
            break;
        
        // if the marks is 70-79
        case 7: 
            printf("Your grade is C \n"); 
            break;
        
        // if the marks is 60-69
        case 6: 
            printf("Your grade is D \n"); 
            break;
        
        default: printf(" You got F Grade, You are Fail");
            break;
        }
    }
    
    
    
    return 0;
}