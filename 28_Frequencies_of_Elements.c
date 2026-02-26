/* Write a program to find frequencies of elements in a sorted array.

Input: 10 10 20 20 20 30 40 40

Output:
10 occurs 2 times
20 occurs 3 times
30 occurs 1 time
40 occurs 2 times
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

void FrequencySorted(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFreq = 1;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == Arr[iCnt - 1])
        {
            iFreq++;
        }
        else
        {
            printf("%d occurs %d time(s)\n", Arr[iCnt - 1], iFreq);
            iFreq = 1;
        }
    }

    // frequency of last element
    printf("%d occurs %d time \n", Arr[iSize - 1], iFreq);
    
}

int main()
{
    int Arr[] = {10, 10, 20, 20, 20, 30, 40, 40};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);

    FrequencySorted(Arr, iLength);

    return 0;
}