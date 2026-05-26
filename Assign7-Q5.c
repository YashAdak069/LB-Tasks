#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2==0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2!=0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    int iFactDiff = iEvenFact-iOddFact;
    return iFactDiff;   
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    int iRet = FactorialDiff(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}