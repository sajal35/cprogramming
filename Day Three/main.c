#include <stdio.h>
#include <math.h>

int main()
{
    const float pi = 3.14;
    float r;
    float area;

    printf("Enter Radius: ");
    scanf("%f",&r);

    area = pi * pow(r,2);

    printf("The area of circle is %.2f",area);
    return 0;
}
