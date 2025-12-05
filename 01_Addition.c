/* Accept 5 Numbers From user and print Addition of that numbers.

Input - 10 20 30 40 50 
Output- 150

*/


#include<stdio.h>

void Addition(int Data[], int iSize)
{
	int iCnt=0;
	int iSum=0;

	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		iSum= iSum+Data[iCnt];
	}
	printf("Addition is:%d\n",iSum);
}

int main()
{
  int Arr[5], i=0;

  printf("Enter the numbers that you want:\n");
  for(i=0; i<5; i++)
  {
  scanf("%d",&Arr[i]);
  }

  printf("Numbers you entered:\n");
  for(i=0; i<5; i++)
  {
  	printf("%d\t",Arr[i]);
  }
   
   Addition(Arr,5);

	return 0;
}