#include<stdio.h>

int MulDigits(int iNo)
{
    int iDigit = 0;
    int iMulValue = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iMulValue = iMulValue * iDigit;
        iNo = iNo / 10;
    }

    return iMulValue;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d",iRet);

    return 0;
}