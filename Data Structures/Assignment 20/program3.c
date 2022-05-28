///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a program which return all addition of elements in
//                       singly linear inked list. 
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

Input : | 11 | -> | 20 | -> | 32 | -> | 41 | -> Null

Output : The Addition of all the data in the nodes of LL is : 52

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

    int AdditionOfElements(PPNODE head) 
    {
        PNODE temp = *head;
        int iSum = 0;
        while(temp != NULL)
        {
            if((temp->data) % 2 == 0)
            {
              iSum = iSum + (temp->data);
            }
            temp = temp->next;
        }
        return iSum; 

    }
    
int main()
{
    int iRet=0; 
    PNODE first = NULL;

    InsertFirst(&first, 41);
    InsertFirst(&first, 32);
    InsertFirst(&first, 20);  
    InsertFirst(&first, 11);
  
    
    Dsiplay(first);

    iRet = AdditionOfElements(&first);
    printf("The Addition of all the data in the nodes of LL is : %d", iRet);


    return 0;

}
