/* Write a program to replace negative numbers with 0 in an array.

Input: 2 -3 5 -1 7
Output: 2 0 5 0 7

Input: -4 -8 6 9 -2 3
Output: 0 0 6 9 0 3

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void ReplaceNegative(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < 0)
        {
            Arr[i] = 0;
        }
    }
}


int main()
{
    int Arr[] = {-4, -8, 6, 9, -2, 3};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int i = 0;

    ReplaceNegative(Arr, iLength);

    printf("Updated array:\n");

    for(i = 0; i < iLength; i++)
    {
        printf("%d ", Arr[i]);
    }

    return 0;

}
