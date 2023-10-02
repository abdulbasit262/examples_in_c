#include<stdio.h>
void main()
{
    int number;
    int result;
    printf("Enter your number:");
    scanf("%d",&number);
    if(number < 100)
    result=number*10;
    printf("result %d\n",result);
}      