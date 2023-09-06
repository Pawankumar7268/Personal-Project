#include<stdio.h>

int main()
{
    int num1,num2,num3,max;
    printf("Enter a number 1\n");
    scanf("%d",&num1);
    printf("Enter a number 1\n");
    scanf("%d",&num2);
    printf("Enter a number 1\n");
    scanf("%d",&num3);
    max=(num1>num2)?((num1>num3)?num1:num3):(num2>num3)?num2:num3;
    printf("max=%d",max);
    
}