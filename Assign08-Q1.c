#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 1.1;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("%lf",dRet);

    return 0;

}