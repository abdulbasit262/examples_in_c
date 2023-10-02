#include<stdio.h>
void main()
{
    int elements[7]={2,3,6,5,15,18,17};
    int count;
    int count2;
    for (int i = 0; i <7; i++){
        if(elements[i]>10){
           count++; 
        }
        else if(elements[i]<10){
           count2++; 

        }
        

    }
    printf("count:%d\n",count);
    printf("count2:%d\n",count2);  




        
        
    
    
}