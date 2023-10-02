#include<stdio.h>
void main()
{
    int num, digit;
    printf("Enter a number:");
    scanf("%d",&num);
    digit=num%10;
    printf("Right most digit of number you entered is:%d",digit);
}