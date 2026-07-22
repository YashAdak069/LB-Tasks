#include <iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int start = 0;
    int end = iSize - 1;

    while(start < end)
    {
        T temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Reverse(arr, size);

    cout << "Reversed array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
