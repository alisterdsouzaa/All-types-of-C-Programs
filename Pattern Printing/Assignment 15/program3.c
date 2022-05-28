//////////////////////////////////////////////////////////////
// Problem Statement 3 : Dsiplay pattern
///////////////////////////////////////////////////////////////

/* 

a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
a b c d e

*/


#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0, l =0;
    char ch = '\0';

    for(i = 1; i<=iRow;i++) 
    {
        ch = 'a'; l = 0;
        for(j =1; j<=iColumn; j++)
        {
           if(i %2 != 0)
           {
          printf("%c\t",ch++);
           }
           else{
               printf("%d\t", ++l);
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
        

