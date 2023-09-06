#include<stdio.h>
int fact(int n);
int main()
{
    int num,res;
    printf("Enter a number");
    scanf("%d",&num);

    res=fact(num);
    printf("%d",res);

}
int fact(int n)
{
    if(n<=0)
    return(1);
    else
    {
        
        return fact(n-1)*n;
    }


}

