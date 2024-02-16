// How to print a pyramid in c language
#include<stdio.h>
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=5;i>=0;i--)
    {
        for(int j=0;j<=5-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

