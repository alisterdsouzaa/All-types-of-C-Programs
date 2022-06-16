///////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write program which 7th & 15th & 21st,28th bit is on or off.  
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChekBit(UINT iNo)
{
	int iMask=0X08104040;
	int iResult=0;
	
	iResult=iNo&iMask;
	
	if(iResult==0)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChekBit(iValue);
	
	if(bRet==true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	
	return 0;
}

/////////////////////////////////////////
// Input:  135282752
// output: Bit is ON.
////////////////////////////////////////
