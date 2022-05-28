//////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Accept N numbers from the user and accept NO from user.
//                      Check weather No is present or not. 
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNo(int Arr[], int iLength, int iNO)
{
    int iCnt =0;
    bool bFlag =false;

    for(iCnt=0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] ==iNO)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag; 
}

int main()
{
    int iSize = 0, iNo =0;
    int *ptr = NULL;
    int iCnt =0;
    bool bRet;

    printf("Ente No to check :");
    scanf("%d", &iNo);

    printf("Enter the number of elements :");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter your elements one by one :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element num %d:", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    bRet = CheckNo(ptr, iSize, iNo);
    if(bRet == true)
    {
        printf("Number %d is present", iNo);
    }
    else{
        printf("Number %d is not present.", iNo);
    }
    free(ptr);
    return 0;
}
