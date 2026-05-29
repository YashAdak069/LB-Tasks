#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;

}

int main()
{
    int iValue = 0;
    
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    int iRet = 0;

    iRet=MultFact(iValue);

    printf("%d",iRet);

    return 0;
}