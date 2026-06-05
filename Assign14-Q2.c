#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iECount = 0;
    int iOCount = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iECount++;
        }
        else
        {
            iOCount++;
        }
    }

    iDiff = iECount - iOCount;

    return iDiff;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to alloacte the memory");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("Difference between Frequency is : %d",iRet);

    free(p);

    return 0;
}