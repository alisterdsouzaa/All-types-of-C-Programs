//////////////////////////////////////////////////////////////
// Problem Statement 4 : Dsiplay pattern
///////////////////////////////////////////////////////////////

/* 

 1  2  3  4  5
-1 -2 -3 -4 -5
 1  2  3  4  5
-1 -2 -3 -4 -5

*/


#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0, l =0, k = 0;
  
    for(i = 1; i<=iRow;i++) 
    {
        l = 0; k = 0;
        for(j =1; j<=iColumn; j++)
        {
           if(i %2 != 0)
           {
          printf("%d\t",++k);
           }
           else{
               printf("%d\t",++l * -1);
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
        

