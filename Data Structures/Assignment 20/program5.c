///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Write a program which displays all addition of Digits of elements in
//                       singly linear inked list. 
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

Input : | 110 | -> | 230 | -> | 20 | -> | 240 | -> | 640 | -> Null

Output : | 2 | ->  | 5 | ->  | 2 | ->  | 6 | ->  | 10 | ->  NULL

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

    void displayAddOfDigits(PPNODE head) 
    {
        PNODE temp = *head;
        int iNo =0;
        int iSum = 0, iDigit = 0;
        while(temp != NULL)
        {
            iNo = temp->data;
            while(iNo != 0)
            {
            iDigit = iNo%10;
            iSum = iSum + iDigit; 
            iNo = iNo/10;
            }
            printf("| %d | ->  ", iSum);
           
            iSum = 0;

            temp = temp->next;
        }
         printf("NULL");


    }
    
int main()
{
    int iRet=0; 
    PNODE first = NULL;

    InsertFirst(&first, 640);
    InsertFirst(&first, 240);
    InsertFirst(&first, 20);  
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);
  //  InsertFirst(&first, 11);
    
    
    Dsiplay(first);

    displayAddOfDigits(&first);

 

    return 0;

}
