#include<stdio.h>
void main()
{
    int a;
    int b;
    int result=1;
    printf("Enter value a:");
    scanf("%d",&a);
    printf("Enter value b:");
    scanf("%d",&b);
    for (int i = 0; i < b ; i++)
        result=result*a;

    printf("result:%d\n",result);
}