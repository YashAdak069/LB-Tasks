#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;

    int iAddFact = 0;
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iAddFact = iAddFact + iCnt;
        }
    }

    int iAddNonFact = 0;
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iAddNonFact = iAddNonFact + iCnt;
        }
    }

    int iRetValue = iAddFact-iAddNonFact;

    return iRetValue;    

}

int main()
{
    int iValue = 0;
    
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    int iRet = 0;

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}