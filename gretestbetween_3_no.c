#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers to check greatest:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is greater than b and c");
    }
    else if (b>c && b>a)
    {
        printf("b is greater than a and c");
    }
    else
    {
        printf("c is greater than a and b");
    }
}