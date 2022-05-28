///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4: Write a program which displays  the 2nd Maximum element from 
//                       singly linear inked list. 
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

INPUT : | 110 | -> | 230 | -> | 320 | -> | 240 | -> Null

OUTPUT : 240 is the second maximum element.


*/


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
  
     PNODE newn = NULL;
     newn = (PNODE)malloc(sizeof(NODE));

     newn-> data = no; 
     newn->next = NULL;

     if(*head == NULL) // LL is empty 
     {
         *head = newn; 
     }
     else
     {      // LL contains atleast one node.
            newn -> next= *head;
            *head = newn; 
     }

}

 void Dsiplay(PNODE head)
     {
        printf("Elements from LinkedList are : \n");

        while(head != NULL)
        {
            printf("| %d | -> ", head->data); 
            head = head -> next;
        }
        printf("Null\n");
     }


     int SecMaximum(PPNODE head)
     {
         PNODE temp = *head; 
         int iMax = 0, iCnt =0;
         int iMax2 = 0;
        
        while(temp != NULL)
        {   
            if(temp->data > iMax )
            {
                iMax = temp->data;
            }
            temp = temp ->next;
         }

          temp = *head;
         while(temp != NULL)
         {
          if(temp->data > iMax2 && temp->data != iMax)
               {
                   iMax2 = temp->data;
               }
               temp= temp->next;
           }

        return iMax2;
     } 

  
    
int main()
{
    int iRet=0; 
    PNODE first = NULL;

    InsertFirst(&first, 240);
    InsertFirst(&first, 320);
    InsertFirst(&first, 230);  
    InsertFirst(&first, 110);
  
     Dsiplay(first);

     iRet = SecMaximum(&first);
     printf("%d is the second maximum element.", iRet);

    return 0;

}
