#include<stdio.h>

int main()
{
    float f,c;
    printf("enter temperature");
    scanf("%f",&f);
    c=((5/9.0f)*(f-32));
    printf("%f",c);
}