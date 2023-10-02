#include <stdio.h>
void main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        result = result + A[i];
    }
    printf("result %d\n",result);
}
