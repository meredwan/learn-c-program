//1+5+9+13........n
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter your Number series :");
    scanf("%d",&n);
    printf("1+5+9+13.....%d",n);

    for(i=0;i<n;i=i+4)
    {
        sum=sum+i;

    }

    printf(" =%d\n",sum);

    getch();
}
