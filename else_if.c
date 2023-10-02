#include<stdio.h>
void main()
{
   float height=5.8;
   int age=16;
   char name='b';
   int class=10;
   char input;
   printf("'h'for height,'a'for age,'n'for name,'c'for class");
   scanf("%c",&input);
   if(input=='h')
      printf("height:%.2f\n",height);
   else if(input=='a')
      printf("age:%d\n",age);
   else if(input=='n')
      printf("name:%c\n",name);
   else if(input=='c')
      printf("class:%d\n",class);   
   else{
      printf("Worng input\n");
      return;
   }
}