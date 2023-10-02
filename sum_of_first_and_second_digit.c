#include<stdio.h>
void main()
{
    int x;
    int result;
    printf("Enter your x:");
    scanf("%d",&x);
    int l1digit = x%10;
    printf("l1digit:%d\n",l1digit);
    x=x/10;
    int l2digit =x%10;
    printf("l2digit:%d\n",l2digit);
    
    result=l1digit+l2digit;
    printf("result:%d\n",result);
}