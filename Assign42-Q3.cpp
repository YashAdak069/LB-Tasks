#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T no)
{
    int iPos = 0;
    int iCnt = 0;
    while(iCnt < iSize)
    {
        if(arr[iCnt] == no)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
    }

    return iPos;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    printf("First Occurance is at %d",iRet);
    return 0;
}