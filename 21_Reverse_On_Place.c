/* Write a program that accepts n integers from the user, stores them in an array,
   and then reverses the array without using any extra array.


Input: 10 20 30 40 50

Output: Reversed Array : 50 40 30 20 10
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>
#include<stdlib.h>

void Reverse(int Arr[], int iSize)
{
    int start = 0, end = iSize - 1;
    int temp = 0;

    while(start < end)
    {
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Reverse(ptr, iLength);

    printf("Reversed Array : \n");
    for(i = 0; i < iLength; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}

