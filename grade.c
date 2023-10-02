#include<stdio.h>
void main()
{
   int marks;
   char grade;
   printf("Enter your marks:");
   scanf("%d",&marks);
   if(marks >= 0 && marks <= 33)
      grade='F';
   else if(marks > 33 && marks <= 50)
      grade='D';
   else if(marks > 50 && marks <= 70)
      grade='C';
   else if(marks > 70 && marks <= 80)
      grade='B';
   else if(marks > 80 && marks <= 100)
      grade='A';
    else{
      printf("Worng grade\n");
      return;
    }
   printf("grade:%c\n",grade);
}