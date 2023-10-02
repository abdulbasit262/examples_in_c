#include<stdio.h>
void main()
{
    int x;
    int result;               
    printf("Enter your x:");
    scanf("%d",&x);
    int l1digit =x %10;
    printf("l1digit:%d\n",l1digit);
    x= x/10;
    x= x/10;
    x= x/10;
    x= x/10;
    int l5digit =x %10;
    printf("l5digit:%d\n",l5digit);
    result=l1digit+l5digit;
    printf("result:%d\n",result);  
}