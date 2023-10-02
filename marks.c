#include<stdio.h>
void main()
{
    float Totalmarks;
    float Obtainedmarks;
    float Percentage;
    printf("Enter your Total marks:");
    scanf("%f",&Totalmarks);
    printf("Enter your Obtained marks:");
    scanf("%f",&Obtainedmarks);
    Percentage=(Obtainedmarks * 100)/Totalmarks;
    printf("Percentage:%.2f\n",Percentage);
}    