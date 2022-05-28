//////////////////////////////////////////////////////////////
// Problem Statement 5 : Dsiplay pattern
///////////////////////////////////////////////////////////////

/* 

1 2 3 4 
5 6 7 8
9 10 11 12

*/


#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
    int k = 0;

    for(i = 1; i<=iRow;i++) 
    {
        for(j =1; j<=iColumn; j++)
        {
           
          printf("%d\t",++k);
                   
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
        

