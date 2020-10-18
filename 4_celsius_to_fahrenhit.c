#include<stdio.h>
#include<math.h>

int main(){

    //formula of celsius to fahrenheit (0°C × 9/5) + 32 = 32°F

    float celsius;

    printf("Enter celsius:",celsius );
    scanf("%f",&celsius);

    float fahrenheit =  (celsius * 9/5) + 32;

    printf("celsius to fahrenheit is : %f",fahrenheit);

    return 0;

    
}