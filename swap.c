#include<stdio.h>
int main()
{
    int temp,a,b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping the value of a is %d\n",a);
    printf("after swapping the value of b is %d",b);
}