////////////////////////////////////////////////////////////////////////////
//  Problem Statement 1 : Write a program to search first occurence of 
//                      particular element in singly linear linkedlist. 
/////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include<stdlib.h>

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

     int searchFirstOcc(PPNODE head, int iNo)
     {      int iCnt = 1;
            PNODE temp = *head; 

            while(temp->data != iNo)
            {
                iCnt++;
                temp = temp->next;
            }
        return iCnt;
     }
int main()
{
    int iRet = 0; 
    PNODE first = NULL;

    InsertFirst(&first, 70);   
    InsertFirst(&first, 30);
    InsertFirst(&first, 50);
    InsertFirst(&first, 40);
    InsertFirst(&first, 30);  
    InsertFirst(&first, 20);
    InsertFirst(&first, 10);
    
    iRet = Count(first);
    printf("Count is %d", iRet);

    Dsiplay(first);
    
    iRet = searchFirstOcc(&first, 30);
    printf("The first occurrence of number in Linked is at node : %d", iRet);

    return 0;
}
