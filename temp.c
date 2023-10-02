#include<stdio.h>
void main()
{
    int a=2,b=3,temp;
    temp=a;
    a=b;
    b=temp;
    printf("value of a after swapping:%d\n",a);
    printf("value of b after swapping:%d\n",b);
}