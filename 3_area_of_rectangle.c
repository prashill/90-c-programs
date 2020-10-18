#include <stdio.h>

int main()
{

    int l, w;

    printf("Enter Length of Rectangle:", l);
    scanf("%d", &l);

    printf("Enter Width of Rectangle:", w);
    scanf("%d", &w);

    int area = l * w;

    printf("Area of Ractangle is %d", area);

    return 0;
}