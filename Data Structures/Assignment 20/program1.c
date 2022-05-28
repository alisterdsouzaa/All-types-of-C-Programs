///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Write a program which displays all the elements which are perfect from 
//                       singly linear inked list. 
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

INPUT : | 11 | -> | 28 | -> | 17 | -> | 41 | -> | 6 | -> | 89 | -> Null

Output : 6  28

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

     int Count(PNODE head)
     {
         int iCnt = 0;
        while(head != NULL)
        {
           iCnt++;
            head = head -> next;
        }
        return iCnt; 
     }

     void Perfect(PPNODE head)
     {
         PNODE temp = *head; 
         int iCnt = 0;
         int iSum = 0;
         while(temp != NULL)
         {
            for(iCnt=1; iCnt<temp->data;iCnt++)
            {
                if(temp->data % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
            }
            if(iSum == temp->data)
            {
                printf("%d is A Perfect number.\n", temp->data);
            }
            iSum = 0;
            temp = temp->next;
         }
        

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
     Perfect(&first);

    return 0;

}
