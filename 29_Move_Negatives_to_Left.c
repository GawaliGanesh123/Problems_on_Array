/* Write a program to move all negative numbers to the left side of the array.

Input:  1 -2 3 -4 5 -6
Output: -2 -4 -6 1 3 5
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void MoveNegativeLeft(int Arr[], int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int temp = 0;


    while(iStart < iEnd)
    {
        if(Arr[iStart] < 0)
        {
            iStart++;
        }
        else if(Arr[iEnd] >= 0)
        {
            iEnd--;
        }
        else
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
        }
    }
}

int main()
{
    int Arr[] = {1, -2, 3, -4, 5, -6};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int i = 0;

    MoveNegativeLeft(Arr, iLength);

    printf("Array after moving negatives to left : \n");
    for(i = 0; i < iLength; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");

    return 0;
}