#include<stdio.h>

double FhtoCs(float fTemp)
{
    double iCon = (fTemp-32) * (5.0/9.0);

    return iCon;    
}

int main()
{
    float fValue = 0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    double dRet = 0;
    dRet = FhtoCs(fValue);

    printf("%lf ",dRet);

    return 0;
}