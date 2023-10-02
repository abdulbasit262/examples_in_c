#include<stdio.h>
void main()
{
    int multiples[5];
    for (int i = 0; i < 5; i++)
       multiples[i]=(i+1)*23;

     for (int i = 0; i < 5; i++)
     printf("%d multiples\n",multiples[i]);
}