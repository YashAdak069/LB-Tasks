#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr, int iSize, T no)
{
    int iCount = 0;
    int iCnt = 0;
    while(iCnt < iSize)
    {
        if(arr[iCnt] == no)
        {
            iCount++;
        }
        iCnt++;
    }

    return iCount;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    printf("Frequency is %d",iRet);
    return 0;
}