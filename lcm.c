#include<stdio.h>
int main()
{
    int num1,num2,lcm,fact=1;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    lcm=(num1>num2)? num1:num2;
    while(fact)
    {
        if(lcm%num1==0 && lcm%num2==0)
        {
            printf("lcm is %d and %d is %d\n",num1,num2,lcm);
            fact=0;
        }
        lcm++;
    }
}