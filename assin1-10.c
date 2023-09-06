#include<stdio.h>
#include<math.h>

int main()
{
   int l1,l2,l3;
   float area,peri,s;
   printf("enter length of l1");
   scanf("%d",&l1); 
    printf("enter length of l2");
   scanf("%d",&l2); 
    printf("enter length of l3");
   scanf("%d",&l3);
   peri=l1+l2+l3;
    printf("Perimeter = %f\n",peri);
    s=peri/2;
    printf("s= %.2f \n",s);
    area=sqrt(s*(s-l1)*(s-l2)*(s-l3));
    printf("area= %.2f",area);

}