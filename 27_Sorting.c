/* Write a program to sort the array without using any sorting function.

Input: 40 10 30 20

Output: 10 20 30 40
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
#include<stdio.h>
#include<stdlib.h>

void SortArray(int Arr[], int iSize)
{
    int i = 0, j = 0, temp = 0;

    for(i = 0; i < iSize - 1; i++)
    {
        for(j = 0; j < iSize - i - 1; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
    int Arr[] = {40, 10, 30, 20};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int i = 0;

    SortArray(Arr, iLength);

    printf("Array after sorting : \n");
    for(i = 0; i < iLength; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");

    return 0;

}


