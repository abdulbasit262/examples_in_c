#include<stdio.h>
void main()
{
    int  a;
    int  b;
    int result;
    char op;
    printf("Enter op");
    scanf("%c",&op);
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    if(op=='+')
    result=a+b;
    else if(op=='-')
    result=a-b;
    else if(op=='*')
    result=a*b;
    else if(op=='/')
    result=a/b;
else{
    printf("Worng result\n");
    return;
} 
   printf("result:%d\n",result);     
}