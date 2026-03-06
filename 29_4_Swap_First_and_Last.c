/* Write a program to swap first and last element of an array.

Input: 10 20 30 40 50
Output: 50 20 30 40 10

Input: 5 8 12
Output: 12 8 5

*/
//////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void SwapFirstLast(int Arr[], int iSize)
{
    int temp = 0;

    if(iSize > 1)   // minimum 2 elements required
    {
        temp = Arr[0];
        Arr[0] = Arr[iSize - 1];
        Arr[iSize - 1] = temp;
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int i = 0;

    SwapFirstLast(Arr, iLength);

    printf("Updated array:\n");

    for(i = 0; i < iLength; i++)
    {
        printf("%d ", Arr[i]);
    }

    return 0;
}