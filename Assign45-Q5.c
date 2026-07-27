#include<stdio.h>

int Product(int iNo)
{
    int iDigit = 0;
    static int iMul = 1;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
        Product(iNo);
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Product(iValue);

    printf("The Product is %d\n",iRet);

    return 0;
}