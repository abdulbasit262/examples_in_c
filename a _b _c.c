#include<stdio.h>
void main()
{
    int a=2, b=3, c=4, temp;
    printf("before swapping value of a b c:%d, %d, %d\n",a ,b ,c);
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("after swapping value of a b c:%d, %d, %d\n",a ,b ,c);
}
