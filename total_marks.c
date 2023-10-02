#include<stdio.h>
void main()
{
    float marks[4],total_marks;
    printf("please enter the marks obtained in 4 subjects:");
    scanf("%f%f%f%f",&marks[0], &marks[1], &marks[2], &marks[3]);
    total_marks= marks[0]+marks[1]+marks[2]+marks[3];
    printf("Total marks obtained by student are %f",total_marks);
}