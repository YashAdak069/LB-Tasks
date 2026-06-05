#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

}

int main()
{
    int iCnt = 0, iSize = 0;
    int iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elemets : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending point : \n");
    scanf("%d",&iValue2);

    printf("\n");

    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}