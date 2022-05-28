// Square Pattern (Matrix)

// Input 4 
// ie) Row 4 Column 4.

/*
        * * * * 
        * * * * 
        * * * * 
        * * * * 
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt = 0;
    int j = 0;
    for(iCnt = 1; iCnt<=iRow; iCnt++)
    {
        for(j=1; j<=iColumn; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0;
    int iColumn = 0;

    printf("Enter the number of Rows :");
    scanf("%d", &iRow);

     printf("Enter the number of Columns :");
    scanf("%d", &iColumn);

    Pattern(iRow, iColumn);

    return 0;
}
        

