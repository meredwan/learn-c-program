#include<stdio.h>
int main()
{
  char sing;
double num1, num2;
printf("Enter your choice (+, -, *, /) :");
scanf("%c",&sing);


printf("Enter your first number : ");
scanf("%lf",&num1);
printf("Enter your second number: ");
scanf("%lf",&num2);

switch(sing)

{

case'+' :
    {
        printf("%lf + %lf = %lf\n",num1,num2,num1+num2);
        break;
    }
    case'-' :
    {
        printf("%lf - %lf = %lf\n",num1,num2,num1-num2);
        break;
    }
    case'*' :
    {
        printf("%lf * %lf = %lf\n",num1,num2,num1*num2);
        break;
    }
    case'/' :
    {
        printf("%lf / %lf = %lf\n",num1,num2,num1/num2);
        break;
    }

    default:
        printf("Not a valid keyword");
}




}


