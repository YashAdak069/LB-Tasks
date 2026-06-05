#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt < iLength)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;
    int *p = NULL;
    int iKey = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the element to find : ");
    scanf("%d",&iKey);

    bRet = Check(p,iSize,iKey);

    if(bRet == TRUE)
    {
        printf("\nElement is present\n");
    }
    else
    {
        printf("\nElement is not present\n");
    }

    free(p);

    return 0;
}