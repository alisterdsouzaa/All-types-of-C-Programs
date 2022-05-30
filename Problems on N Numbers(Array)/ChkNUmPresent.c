
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool ChkOccurence(int Arr[], int iLength, int Num)
{
    int iCnt = 0, iSum =0, iMin = Arr[0], Freq = 0, I =0;
    for(iCnt=0;iCnt<iLength; iCnt++)
    {
       if(Num==Arr[iCnt])
       {
           I++;
         break;
       }
       
    }
    if(I==1)
    {
    return true; 
    }
    else{
        return false;
    }

}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    bool iRet;
    int NumCkh;

    printf("Enter your number to check : ");
    scanf("%d", &NumCkh);

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter then number of elements of Array :\n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    // Function call 
    iRet = ChkOccurence(ptr, iSize, NumCkh);
    if(iRet == true)
    {
    printf("Element is there in Array.");
    }
   else{
       printf("element not there. ");
   }
    free(ptr);

    return 0;
}