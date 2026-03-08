/* Write a program to find difference of two arrays (A - B) (Print the elements of Array1 that are not present in Array2.)

Array 1: 1 2 3 4 5
Array 2: 3 4 6

Output: 1 2 5

Array 1: 10 20 30 40
Array 2: 20 50

Output: 10 30 40

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void FindDifference(int Arr1[], int iSize1, int Arr2[], int iSize2) 
{
    int i = 0, j = 0;
    int flag = 0;

    for(i = 0; i < iSize1; i++)
    {
        flag = 0;

        for(j = 0; j < iSize2; j++)
        {
            if(Arr1[i] == Arr2[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d ", Arr1[i]);
        }
    }
}

int main()
{
    int Arr1[] = {1, 2, 3, 4, 5};
    int Arr2[] = {3, 4, 6};

    int iLength1 = sizeof(Arr1)/sizeof(Arr1[0]);
    int iLength2 = sizeof(Arr2)/sizeof(Arr2[0]);

    printf("Difference (A - B):\n");
    FindDifference(Arr1, iLength1, Arr2, iLength2);

    return 0;

}

