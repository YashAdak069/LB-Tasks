#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iPos = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;
            break;
        }
    }
    return iPos;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
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

    iRet = FirstOcc(p,iSize,iKey);

    if(iRet == -1)
    {
        printf("There is no such number \n");
    }
    else
    {
    printf("The first occurence of %d is p[%d]",iKey,iRet);
    }
    free(p);

    return 0;
}