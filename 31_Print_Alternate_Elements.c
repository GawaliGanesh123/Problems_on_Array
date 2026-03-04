/* Write a program to print alternate elements of an array.

Input: 10 20 30 40 50 60
Output: 10 30 50

Input: 5 8 12 15 18
Output: 5 12 18

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void PrintAlternate(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i = i + 2)
    {
        printf("%d ", Arr[i]);
    }
}


int main()
{
    int Arr[] = {10, 20, 30, 40, 50, 60};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);

    printf("Alternate elements:\n");
    PrintAlternate(Arr, iLength);

    return 0;

}
