/* Write a program that inserts an element at a given position in a fixed-size array using shifting logic.

Example:  Array = 10 20 30 40
    Value to insert = 25
    Position = 2

Output:
10 25 20 30 40
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Insert_Element(int Arr[], int isize, int iValue, int ipos)
{
    int idx = 0, i = 0;

    if(ipos < 1 || ipos > isize)
    {
        printf("Invalid Position\n");
        return;
    }

    idx = ipos - 1;   

    for(i = isize - 2; i >= idx; i--)
    {
        Arr[i + 1] = Arr[i];
    }

    Arr[idx] = iValue;
}

int main()
{
    int Arr[5] = {10, 20, 30, 40};   //last slot empty
    int element = 25;
    int pos = 2;

    Insert_Element(Arr, 5, element, pos);

    printf("Array after insertion:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", Arr[i]);
    }

    return 0;
}


