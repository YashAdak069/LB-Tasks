#include<stdio.h>

void Display()
{
    static char s = 'A';

    if(s <= 'F')
    {
        printf("%c\t",s);
        s++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}