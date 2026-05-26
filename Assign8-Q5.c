#include<stdio.h>

double SquareMeter(int iNo)
{
    double iCon = 0.0929;

    iCon = iNo * 0.0929;

    return iCon;    
}

int main()
{
    int iValue = 0;

    printf("Enter area in square : ");
    scanf("%d",&iValue);

    double dRet = 0;
    dRet = SquareMeter(iValue);

    printf("%lf ",dRet);

    return 0;
}