// 15 14 13 12 11
// 10 9  8  7
// 6  5  4
// 3  2
// 1

#include <stdio.h>

 void Display(int iInput);

int main ()
{
    int iValue = 0;

    printf("Please enter your number :\n");
    scanf("%d", &iValue);

     Display(iValue);
     return 0; 

}

//   void Display(int iInput)
// {
//     int i = 0, j = 0;
//     int k = 15;
//     for(i=iInput; i>=1; i--)
//     {
//         for(j =1; j<=i; j++)
//         {
//             printf("%d\t", k);
//             k--;
//         }
//         printf("\n");
//     }

// }


// Pattern 2

//   *
//   *       *
//   *               *
//   *                       *
//   *       *       *       *       *



// void Display(int iNo)
// {
//     int iRow = 0, iColumn = 0;

//     for(iRow = 1; iRow<=iNo; iRow++)
//     {
//         for(iColumn = 1; iColumn<=iNo; iColumn++)
//         {
//             if(iRow==iColumn)
//             {
//                 printf("*\t");
//             }
//             else if(iRow==iNo || iColumn == 1)
//             {
//                 printf("*\t");
//             }
//             else{
//                 printf(" \t");
//             }
//         }
//         printf("\n");
//     }

// }

void Display(int iNo)
{
    int i = 0, j = 0, k = 0;

    for(i = 1; i<=iNo; i++)
    {
        k = i;
        for(j=1;j<=iNo; j++)
        {
            if(i==1 || i==iNo)
            {
                printf("*\t");
            }
            else{
                printf("%d\t", k);
                k++;
            }

        }
        printf("\n");
    }
}
    