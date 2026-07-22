#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
    int iCnt = 0;

    while(iCnt < iSize)
    {
        cout<<value<<"\t";
        iCnt++;
    }
    cout<<endl;
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}