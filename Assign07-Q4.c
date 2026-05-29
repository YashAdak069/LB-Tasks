#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2!=0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;   
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    int iRet = OddFactorial(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}