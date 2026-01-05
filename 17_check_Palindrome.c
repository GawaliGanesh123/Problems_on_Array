/* Write a program that accepts n numbers from the user and checks whether the array is a palindrome or not.

Input:  10 20 30 20 10
Output: Array is palindrome

Input: 10 15 20 15 5
Output: Array is not palindrome

*/ 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

bool Check_Palindrome(int Arr[], int iSize)
{
    int start = 0;
    int end = iSize - 1;

    while(start < end)
    {
        if(Arr[start] != Arr[end])
        {
            return false;   // Not a palindrome
        }
        
        start++;
        end--;
    }
    return true;   // All elements matched
}

int main()
{
    int Arr[20];
    int iLength = 0, i = 0;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&Arr[i]);
    }

    bRet = Check_Palindrome(Arr, iLength);

    if(bRet == true)
    {
        printf("Array is palindrome\n");
    }
    else
    {
        printf("Array is not palindrome\n");
    }

    return 0;
}



