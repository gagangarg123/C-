// #include<stdio.h>
// void greet(){
//     printf("good morning \n");
//     printf("how are you\n");
// }
// int main()
// {
//     greet();
//     greet();
//     greet();
//     return 0;
// }


// #include<stdio.h>
// void england(){
//     printf("you are in england \n");
//     return;
// }
// void australia(){
//     printf("you are in australia \n");
//     england();// calling england 
//     return;
// }
// void india(){
//     printf("you are in india \n");
//     australia();// calling australia 
//     return;
// }
// int main()
// {
//     india();
// }

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