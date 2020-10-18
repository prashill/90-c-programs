#include <stdio.h>
#include <math.h>

int main()
{

    // area of circle is πr2

    // volume of cylinder

    float pie = 3.14;
    int h = 3;
    int r;

    printf("Enter the radius ", r);
    scanf("%d", &r);

    printf("area of circle is %f \n ", pie * (r * r));

    printf("Volume of cylinder is %f", pie * (r * r) * h);

    return 0;
}