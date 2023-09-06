#include<stdio.h>

int main()
{
    int num1,num2,div;
    printf("Enter a number 1 \n");
    scanf("%d",&num1);
     printf("Enter a number 2 \n");
    scanf("%d",&num2);
    if(num2==0)
    {
        printf("Cant devide by zero");
    }
    else
    {
        div=num1/num2;
        printf(" division of two numbers is %d \n",div);
    }
}