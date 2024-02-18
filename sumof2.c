#include<stdio.h>
int sum(int a, int b)
{
    int sum;
    printf("enter any number for sum:");
    sum=a+b;
    printf("sum is %d ",sum);
}
int main()
{
     sum(3,4);
     sum(4,5);
}