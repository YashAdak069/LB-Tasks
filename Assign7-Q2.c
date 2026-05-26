#include<stdio.h>

int DollarToInr(int iNo)
{
    int iCon = 70;

    return iNo*iCon;    
}

int main()
{
    int iValue = 0;

    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = DollarToInr(iValue);

    printf("Value in INR is %d ",iRet);

    return 0;
}