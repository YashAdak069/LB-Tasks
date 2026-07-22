#include<iostream>
using namespace std;

template<class T>
T Multiply(T no1, T no2)
{
    T Ans = 1;
    Ans = no1 * no2;
    return Ans;
}

int main()
{
    int iRet = Multiply(10,20);
    printf("Product of Integers is : %d\n",iRet);
    float fRet = Multiply(10.4f,20.2f);
    printf("Product of Float are : %f",fRet);
    return 0;
}