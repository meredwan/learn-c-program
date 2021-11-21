//Write a program that sum, sub, Multiplication, Div and total and avarage
#include <stdio.h>

int main()
{
//sum calculation
 int A, B, C, sum;
 float avg;
 printf("Enter your first, Sceond and lest number : ");
 scanf("%d %d %d", &A,&B,&C);
 sum=A+B+C;
 printf("The sum is: %d\n",sum);

 // average calculation
 avg = sum/3;
 printf("The average is %f", avg);

 //sub calculation

 sum= A-B-C;
 printf("The sub is: %d\n",sum);

 //Multiplication calculation

sum= A*B*C;
 printf("The Multiplication is: %d\n",sum);

 //Divided calculation
 sum= A/B/C;
 printf("The  div is: %d\n",sum);




  getch ();
}


