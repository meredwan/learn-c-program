//input a digit and convert a spaling
#include<stdio.h>
int main()
{

int digit;
printf("Enter your Number :");
scanf("%d",&digit);

switch(digit)
{
    case 0:
    printf("Zero\n");
    break;

    case 1:
    printf("One\n");
    break;

    case 2:
    printf("two\n");
    break;

    case 3:
    printf("Three\n");
    break;

    case 4:
    printf("four\n");
    break;

    case 5:
    printf("Five\n");
    break;

    case 6:
    printf("Six\n");
    break;

    case 7:
    printf("Seven\n");
    break;

    case 8:
    printf("Eight\n");
    break;

    case 9:
    printf("Nine\n");
    break;

    default:
    printf("Worng digit");


}
getch();
}
