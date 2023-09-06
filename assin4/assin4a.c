#include<stdio.h>
int factorial();// decleration
void charPrint();
int main()
{
    int fact,num;
     printf("Enter a number");
    scanf("%d",&num);
    fact=factorial(num);
    printf("fact=%d\n",fact);
    charPrint();
}
int factorial(int n)
{
    int i,res=1;
  
    for(i=1;i<=n;i++)
    {
        res=res*i;
    }
    return(res);
}

void charPrint()
{
    int num;
    char ch;

    printf("Enter a charecter\nc");
    scanf("%*c%c",&ch); 
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("charecter=%c\n",ch);
    }

}
