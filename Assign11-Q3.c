#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iNum = 0;
    int iNumAdd = 0;

    if(iStart > iEnd  || iStart < 0)
    {
        printf("Invalid Range");
        return 0;
    }

    for(iNum = iStart; iNum <= iEnd; iNum++)
    {
        iNumAdd = iNumAdd + iNum;
    }

    return iNumAdd;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);
    
    if(iRet != 0)
    {
        printf("%d",iRet);

    }
    
    return 0;
}