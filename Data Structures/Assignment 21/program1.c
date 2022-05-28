///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1: Write a program which reverse each element from 
//                       singly linear Linked list.
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

INPUT : | 11 | -> | 28 | -> | 17 | -> | 41 | -> | 6 | -> | 89 | -> Null

OUTPUT :| 11 |->| 82 |->| 71 |->| 14 |->| 6 |->| 98 |->NULL


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


     void ReverseNumder(PPNODE head)
     {
         PNODE temp = NULL;
         temp = *head; 
         int iDigit = 0, iReverse=0;

         while(temp!=NULL)
         {
             while(temp->data != 0 )
             {
                iDigit = temp->data %10;
                iReverse = iReverse * 10 + iDigit;
                temp->data = temp->data / 10;
             }
             printf("| %d |->", iReverse);
             iReverse = 0;
             temp = temp->next;
         }
         printf("NULL\n");
     } 

  
    
int main()
{
    int iRet=0; 
    PNODE first = NULL;

    InsertFirst(&first, 89);
    InsertFirst(&first, 6);
    InsertFirst(&first, 41);  
    InsertFirst(&first, 17);
    InsertFirst(&first, 28);
    InsertFirst(&first, 11);
  
     Dsiplay(first);

    ReverseNumder(&first);
    
    return 0;

}