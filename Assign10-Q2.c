#include<stdio.h>

double RectArea(float fheight, float fwidth)
{
    double dArea = 1.1;

    dArea = fheight * fwidth;

    return dArea;

}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter height : ");
    scanf("%f",&fValue1);

    printf("Enter width : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("%lf",dRet);

    return 0;

}