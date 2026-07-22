#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T no)
{
    int iPos = 0;
    int iCnt = 0;
    while(iCnt < iSize)
    {
        if(arr[iCnt] == no)
        {
            iPos = iCnt;
        }
        iCnt++;
    }

    return iPos;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    printf("Last Occurance is at %d",iRet);
    return 0;
}