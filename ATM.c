#include <stdio.h>
void main()
{
    int fixpin = 1234;
    int balance = 50000;
    int pin;
    int amount;
    printf("Enter your pin:");
    scanf("%d", &pin);
    if (fixpin == pin)
    {
        printf("Enter your amount:");
        scanf("%d", &amount);
        if (amount >= 500 && amount <= 50000)
        {
            int r;
            r = amount % 500;
            if (r == 0)
            {
                printf("with drawn amount:%d\n", amount);
                balance = balance - amount;
                printf("remaining balance:%d\n", amount);
            }
            else
            {
                printf("Worng amount:Enter multiple of 500\n");
                return;
            }
        }
        else
        {
            printf("Worng amount:please Enter amount betteen 500 and 50000");
            return;
        }
    }
    else
    {
        printf("Worng pin\n");
        return;
    }   
}