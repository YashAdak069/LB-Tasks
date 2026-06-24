#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Dec\tOct\tHex\tSymbol\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if( iCnt <= 32 || iCnt == 127 )
        {
            printf("%d\t%o\t%X\tNon Printable\n",iCnt,iCnt,iCnt);
        }
        else if( iCnt == 27 )
        {
            printf("%d\t%o\t%X\t%c\n",iCnt,iCnt,iCnt,iCnt);
        }
        else
        {
            printf("%d\t%o\t%X\t%c\n",iCnt,iCnt,iCnt,iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}