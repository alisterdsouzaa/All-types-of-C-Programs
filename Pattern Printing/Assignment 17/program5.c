/////////////////////////////////////////////////////////////////////////
// Triangle Pattern 5 : Accept num of row and column and display pattern
/////////////////////////////////////////////////////////////////////////
// Input  
// ie) Row 5 Column 5.

/*

     2       3       4       5
             3       4       5
                     4       5
                             5

*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
    for(i=1; i<=iRow; i++) 
    {
        for(j =1; j<=iColumn; j++)
        {
           if(j>i)
           {
               printf("%d\t", j);
           }
           else{
               printf(" \t");
           }
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
        

