#include<stdio.h>
int power(int num, int pow);
int main()
{
    int num,pow,res;
     printf("Enter a number");
    scanf("%d",&num);
    printf("Enter a Power");
    scanf("%d",&pow);
    res=power(num,pow);
    printf("%d power of %d is = %d\n",pow,num,res);
}

    int power(int num, int pow)
    {
    int result=1;
    for(int i=0;i<pow;i++)
    {
        result=result*num;
    }
    return result;
    }


