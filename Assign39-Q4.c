#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first != NULL)                  // Type 1         
    {
        printf("| %d | --> ",first->data);
        first = first->next;
    }

    printf("NULL\n");
}

int Frequency(PNODE first, int iNo)
{
    int iCount = 0;

    while(first != NULL)                 // Type 1
    {
        if(first->data == iNo)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first)    
    {
        *first = newn;
    }

    else                  // LL contains atleast 1 node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)     // first
    {
        *first = newn;
    }

    else                  // LL contains atleast 1 node
    {
        temp = *first;
        while(temp->next != NULL)    // Type 2
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 10);
    InsertFirst(&head, 51);
    InsertFirst(&head, 10);
    InsertFirst(&head, 11);
    InsertLast(&head, 10);
    InsertLast(&head, 12);

    Display(head);

    iRet = Frequency(head, 10);

    printf("Frquency of %d is : %d\n",10,iRet);
    
    return 0;
}