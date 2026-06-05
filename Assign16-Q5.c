#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;
        while(iNo != 0)
        {
            int iDigit = iNo % 10;   
            iSum = iSum + iDigit;    
            iNo = iNo / 10;          
        }
        printf("%d\t", iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Summation of digits:\n");
    DigitsSum(p, iSize);

    free(p);

    return 0;
}
