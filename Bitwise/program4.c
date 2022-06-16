/////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Write program whichCheck whater 7th & 8th & 9st bit is on or off.  
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChekBit(UINT iNo)
{
	int iMask=0X000001C0;
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
