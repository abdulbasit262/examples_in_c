#include<stdio.h>
void main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
      a[i]=(i+1)*2;  

    for (int i = 0; i < 10 ; i++)
      printf("%d a \n",a[i]);
}        