/* Write a program to find the intersection of two sorted arrays.

Input: Array 1: 1 2 3 4 5
       Array 2: 3 4 5 6 7

Output: 3 4 5

Input: Array 1: 10 20 30 40
       Array 2: 15 20 25 30

Output: 20 30

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Intersection(int Arr1[], int iSize1, int Arr2[], int iSize2)
{
    int i = 0, j = 0;

    while(i < iSize1 && j < iSize2)
    {
        if(Arr1[i] < Arr2[j])
        {
            i++;
        }
        else if(Arr1[i] > Arr2[j])
        {
            j++;
        }
        else
        {
            printf("%d ", Arr1[i]);
            i++;
            j++;
        }
    }
}

int main()
{
    int Arr1[] = {1, 2, 3, 4, 5};
    int Arr2[] = {3, 4, 5, 6, 7};

    int iSize1 = sizeof(Arr1)/sizeof(Arr1[0]);
    int iSize2 = sizeof(Arr2)/sizeof(Arr2[0]);

    printf("Intersection of arrays : \n");
    Intersection(Arr1, iSize1, Arr2, iSize2);

    printf("\n");

    return 0;
}
