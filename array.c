#include<stdio.h>
void main()
{
    int array[5]={10,20,30,40,50};
    int i;
    printf("please enter the index whose value you went to display");
    scanf("%d",&i);
    if(i< 5)
    printf("The value is %d\n",array[i]);
}