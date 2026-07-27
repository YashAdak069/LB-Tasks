#include<stdio.h>

int Min(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("The Smallest amongst %d is %d\n",iValue,iRet);

    return 0;
}