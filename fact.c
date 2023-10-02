#include<stdio.h> 
void main()
{
    int n,fact=1;
    printf("Please enter a positive number whose factorial you want to find");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    printf("The factorial of input number %d is %d",n,fact);
}