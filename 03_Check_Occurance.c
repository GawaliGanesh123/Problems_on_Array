/* Accept 5 Numbers From user as well as another Number and print How many times that numbers occures in this array.


Input - 10 15 13 40 13 
      - 13
	  
Output- 2

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<Stdio.h>

void CheckOccurance(int Data[], int iSize, int iNo)
{
	int iCnt=0;
	int iAns=0;

	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if(iNo == Data[iCnt])
		{
			iAns++;
		}
	}

	printf("Number occures %d times",iAns);
}


int main()
{
   int Arr[5], iCnt=0;
   int iValue=0;

   printf("Enter the numbers:");
   for(iCnt=0; iCnt<5; iCnt++)
   {
   	scanf("%d",&Arr[iCnt]);
   }   

   printf("Enter the second value:");
   scanf("%d",&iValue);

   printf("numbers from array:\n");
   for(iCnt=0; iCnt<5; iCnt++)
   {
   	printf("%d\t",Arr[iCnt]);
   }
   CheckOccurance(Arr,5, iValue);


	return 0;

}

