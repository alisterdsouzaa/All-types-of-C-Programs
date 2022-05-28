//////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Accept N numbers from the user and check weather 11 is present or not. 
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength )
{
    int iCnt = 0;
    bool bFlag = false;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0; 
    bool bRet;

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

     bRet = Check(ptr, iSize);

     if(bRet == 1)
     {
         printf("11 is present.\n");
     }
     else{
         printf("11 is not present.\n");
     }

    free(ptr);
    return 0;
}
