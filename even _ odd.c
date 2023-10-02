#include<stdio.h>
void main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n%2 == 0)
    printf("Number is even");
    else{
        printf("number is odd");
        return;
    }
}