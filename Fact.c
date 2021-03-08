//program to find the factorial of given no with minimum time complexity

#include<stdio.h>

void Fact(int iValue)
{
	int iCnt = 0;
	
	printf("Factorials of given number\n");
	for(iCnt = 1; iCnt <= iValue/2; iCnt++)
	{
	   if((iValue % iCnt) == 0)
	   {
          printf("%d\n", iCnt);
	   }		  
	}
}

int main()
{
	int no = 0;
	
	printf("Enter The Number \n");
	scanf("%d",&no);
	
	Fact(no);
	
	return 0;
}


/*
output

Enter The Number
12
Factorials of given number
1
2
3
4
6

*/