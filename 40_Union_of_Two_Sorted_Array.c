/* Write a program to find the union of two sorted arrays.

TInput: Array 1: 1 2 3 4 5
       Array 2: 3 4 5 6 7

Output: 1 2 3 4 5 6 7

Input: Array 1: 10 20 30
       Array 2: 5 20 25 30 40

Output: 5 10 20 25 30 40
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 


#include<stdio.h>
#include<stdlib.h>

void Union(int Arr1[], int iSize1, int Arr2[], int iSize2)
{
    int i = 0, j = 0;

    while(i < iSize1 && j < iSize2)
    {
        if(Arr1[i] < Arr2[j])
        {
            printf("%d ", Arr1[i]);
            i++;
        }
        else if(Arr1[i] > Arr2[j])
        {
            printf("%d ", Arr2[j]);
            j++;
        }
        else
        {
            printf("%d ", Arr1[i]);
            i++;
            j++;
        }
    }

    // Printed remaining elements
    while(i < iSize1)
    {
        printf("%d ", Arr1[i]);
        i++;
    }

    while(j < iSize2)
    {
        printf("%d ", Arr2[j]);
        j++;
    }
}

int main()
{
    int Arr1[] = {1, 2, 3, 4, 5};
    int Arr2[] = {3, 4, 5, 6, 7};

    int iSize1 = sizeof(Arr1)/sizeof(Arr1[0]);
    int iSize2 = sizeof(Arr2)/sizeof(Arr2[0]);

    printf("Union of arrays : \n");
    Union(Arr1, iSize1, Arr2, iSize2);

    printf("\n");

    return 0;
}
