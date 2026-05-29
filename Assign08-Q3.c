#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iCon = 1000;

    return iNo*iCon;    
}

int main()
{
    int iValue = 0;

    printf("Enter distance in KM : ");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = KMtoMeter(iValue);

    printf("%d Meters",iRet);

    return 0;
}