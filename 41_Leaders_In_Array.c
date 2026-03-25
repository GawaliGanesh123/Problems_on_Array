/* Write a program to find leaders in an array.

Input: Array: 16 17 4 3 5 2

Output: 17 5 2

Input: Array: 10 4 2 1
 
Output: 10 4 2 1

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindLeaders(int Arr[], int iSize)
{
    int i = 0;
    int iMaxRight = Arr[iSize - 1];

    // Last always leader
    printf("%d ", iMaxRight);

    for(i = iSize - 2; i >= 0; i--)
    {
        if(Arr[i] > iMaxRight)
        {
            iMaxRight = Arr[i];
            printf("%d ", iMaxRight);
        }
    }
}


int main()
{
    int Arr[] = {16, 17, 4, 3, 5, 2};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);

    printf("Leaders in array : \n");
    FindLeaders(Arr, iLength);

    printf("\n");

    return 0;
}
