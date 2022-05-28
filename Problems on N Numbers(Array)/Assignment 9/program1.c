//////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Accept N numbers from the user and return frequency
//                      of even numbers.
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
     int iCnt = 0, iFreq = 0;
     for(iCnt=0; iCnt<iSize; iCnt++)
     {
         if(Arr[iCnt]%2 == 0)
         {
           iFreq++;
         }
     }
    return iFreq;     
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

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

     iRet = Frequency(ptr, iSize);
     printf("The Frequency of even numbers is : %d", iRet);

    free(ptr);
    return 0;
}
