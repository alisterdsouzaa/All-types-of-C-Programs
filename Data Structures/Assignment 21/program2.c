///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2: Write a program to check PALLINDROME element from 
//                       singly linear Linked list.
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

INPUT : | 11 | -> | 28 | -> | 17 | -> | 414 | -> | 6 | -> | 89 | -> Null

OUTPUT : 11      414     6       NULL

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


     void Pallindrome(PPNODE head)
     {
         PNODE temp = NULL;
         temp = *head; 
         int iDigit = 0, iReverse=0;
         int dataCopy = 0;

         while(temp!=NULL)
         {
             dataCopy = temp->data;
             while(temp->data != 0 )
             {
                iDigit = temp->data %10;
                iReverse = iReverse * 10 + iDigit;
                temp->data = temp->data / 10;
             }
             if(dataCopy == iReverse)
             {
             printf("%d\t", iReverse);
             }
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
    InsertFirst(&first, 414);  
    InsertFirst(&first, 17);
    InsertFirst(&first, 28);
    InsertFirst(&first, 11);
  
     Dsiplay(first);

    Pallindrome(&first);
    
    return 0;

}