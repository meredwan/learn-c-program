#include<stdio.h>
int main()
{
    float b,d,area;
    printf("Enter Base :");
    scanf("%f", &b);
    printf("Enter Height");
    scanf("%f", &d);
    area=0.5*b*d;
    printf("Area of triangle: %.2f\n",area);
}

