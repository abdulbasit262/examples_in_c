#include<stdio.h>
void main()
{
    int sum,math,science;
    printf("Enter marks of mathematics:");
    scanf("%d",&math);
    printf("Enter marks of science:");
    scanf("%d",&science);
    sum=math+science;
    printf("Sum of marks is:%d",sum);
}