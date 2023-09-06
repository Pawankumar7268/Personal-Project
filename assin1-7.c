#include<stdio.h>
int main()
{
 
 int a,b,c,d,num;
    printf("Enter a number");
    scanf("%d",&num);
    a=num/1000;
    num=num%1000;
    b=num/100;
    num=num%100;
     c=num/10;
    d=num%10;
    printf("%d \n %d \n %d \n %d\n",a,b,c,d);
 printf("%d \n %d \n %d \n %d\n",d,c,b,a);
    printf("%d \n %d \n %d \n %d\n",a*1000,b*100,c*10,d);

}