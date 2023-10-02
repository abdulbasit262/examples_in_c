#include<stdio.h>
void main()
{
    int a=3, b=4,c=5;
    printf("before swapping value of a b c:%d, %d, %d\n",a ,b ,c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("after swapping value of a b c:%d, %d, %d\n",a ,b ,c);
}