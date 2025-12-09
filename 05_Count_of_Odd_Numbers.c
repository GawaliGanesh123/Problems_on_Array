/* Accept 5 Numbers From user and print Count of Odd numbers.

Input - 10 15 33 40 83 
Output- 3

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<Stdio.h>

void CountOddNum(int Data[], int iSize)
{
	int iCnt=0;
	int iOdd=0;

	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if((Data[iCnt] % 2) != 0)
		{
			iOdd++;
		}
	}
	  printf("Count of Odd Number:%d\n",iOdd);
}



int main()
{
    int Arr[5], iCnt=0;

    printf("Enter the numbers:");
    for(iCnt=0; iCnt<5; iCnt++)
    {
    	scanf("%d",&Arr[iCnt]);
    }	

    printf("Elements from array:\n");
    for(iCnt=0; iCnt<5; iCnt++)
    {
    	printf("%d\t",Arr[iCnt]);
    }

    CountOddNum(Arr,5);

	return 0;

}
