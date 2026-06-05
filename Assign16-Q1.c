#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p,iLength);

    printf("Maximum element is %d\n",iRet);

    free(p);

    return 0;
}
