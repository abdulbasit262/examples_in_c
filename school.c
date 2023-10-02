#include<stdio.h>
void main()
{
    int number;
    int totalnumber=1100;
    float percentage;
    printf("Enter your number:");
    scanf("%d",&number);
    percentage=number *100 /totalnumber;
    if(percentage > 80)
        printf("you are qualified for BSIT,BSCS,BSSE  admission\n");
    else if(percentage > 70)
        printf("you are qualified for BSIT,BSCS  admission\n");
    else if(percentage >60)
        printf("you are qualified for BSIT  admission\n");
    else{
        printf("your are not qualified\n");
        return;
    }

               
}        