#include<stdio.h>
int swap(int a,int b)
{   
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a is after swapping %d\n",a);
    printf("value of b is after swapping %d",b);
}
int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("enter the value of b:");
    scanf("%d",&b);
    swap(a,b);
}