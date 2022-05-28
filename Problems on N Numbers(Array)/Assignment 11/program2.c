/////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Accept N numbers from user and return
//                       the smallest number. 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int SmallNum(int Arr[], int iLength)
{
    int iSmall = 2147483647, iCnt =0;
    
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;
}

int main()
{
    int iSize =0, *p =NULL;
    int iRet =0, iCnt = 0;

    printf("Enter number of elements :");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        printf("Enter element no %d :", iCnt +1);
        scanf("%d", &p[iCnt]);
    }

    iRet = SmallNum(p, iSize);
    printf("The Smallest number is : %d ", iRet);



    return 0;
}