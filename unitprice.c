#include<stdio.h>
void main()
{
    int units;
    int unitprice;
    int price;
    printf("Enter the units:");
    scanf("%d",&units);
    if(units <= 200)
        unitprice=12;  
    else if(units > 200 && units <= 400)
        unitprice=15;
    else if(units > 400)
        unitprice=20;

    price=units*unitprice;
    printf("price:%d\n",price);          
}