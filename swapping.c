#include<stdio.h>
void main()
{
    int a=3, b=4;
    printf("before swapping value of a b:%d, %d\n",a ,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping value of a b:%d, %d\n",a ,b);
}