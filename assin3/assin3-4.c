#include<stdio.h>
int main()
{
    int i=1,res,num;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        res=res*i;
    }
     printf("%d",res);


}