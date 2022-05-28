/////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Accept N numbers from user and return
//                       the largest number. 
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MaxNum(int Arr[], int iLength)
{
    int iMAx = 0, iCnt =0;
    
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMAx)
        {
            iMAx = Arr[iCnt];
        }
    }
    return iMAx;
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

    iRet = MaxNum(p, iSize);
    printf("The Maximum numbers is : %d ", iRet);



    return 0;
}