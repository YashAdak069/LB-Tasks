#include<stdio.h>

void Display()
{
    static char s = 'a';

    if(s <= 'f')
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