#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    int *p = NULL;
    int iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number to find : \n");
    scanf("%d",&iValue);

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

    iRet = CountFrequency(p,iSize,iValue);

    printf("Frequency of %d is : %d",iValue,iRet);

    free(p);

    return 0;
}