#include<stdio.h>
int main()
{
    int b;

re:
    printf("%d\t",b);
    b++;
    if (b<7)
    goto re;
}


