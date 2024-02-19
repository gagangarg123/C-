#include<stdio.h>
int main()
{
    int r;
    float Area,circumference;
    printf("Enter the Radius of circle :");
    scanf("%d",&r);
    Area=3.14*r*r;
    circumference=2*3.14*r;
    printf(" Area of circle =%f",Area);
    printf("\n circumference of circle =%f",circumference);
}