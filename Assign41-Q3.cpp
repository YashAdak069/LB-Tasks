#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    T Sum = 0;
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        Sum = Sum + arr[i];
    }

    return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.2,2.3,4.4,9.8,12.2};

    int iSum = AddN(arr,5);
    printf("Sum for integer is : %d\n",iSum);

    float fSum = AddN(brr,5);
    printf("Sum for float are : %f",fSum);

    return 0;
}