#include<stdio.h>
void main()
{
    int a[8]={2,3,54,22,67,34,29,19};
    int b[8]={65,73,26,10,4,2,84,26};
    for (int i = 0; i < 8; i++)
        printf("%d",a[i]+b[i]);
}