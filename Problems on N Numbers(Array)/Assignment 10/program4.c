//////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Accept N numbers from the user and accept Range from user.
//                      and Display all elements from that range.
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt =0;
  
   
    for(iCnt=0; iCnt<=iLength;iCnt++)
    {
        if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
        {
          printf("%d\n",Arr[iCnt]);
        }
        
    }
    
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt =0;
    int iRet=0, iValue1 =0, iValue2 =0;

    printf("Ente Starting Range:");
    scanf("%d", &iValue1);

    printf("Enter Ending Range :");
    scanf("%d", &iValue2);

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

    iRet = Range(ptr, iSize, iValue1, iValue2);
    
    
    free(ptr);
    return 0;
}
