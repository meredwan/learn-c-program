#include<stdio.h>
int main()

{
    int marks;
    printf("Enter your Number :");
    scanf("%d",&marks);

    if (sizeof(marks)== sizeof(int)){
        printf("your number is intger\n",marks);
    }else{
            printf("your Number is float");
        }

    return 0;

}
