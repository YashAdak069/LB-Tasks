#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void DisplayN(char Fname[], int iNo)
{
    int fd = 0;
    int iRet = 0;
    char Buffer[1024];
    int iCnt = 0;

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }
    else
    {
        printf("File opened with %d fd\n",fd);
        
        iRet = read(fd,Buffer,iNo);

        if(iRet > 0)
        {
            Buffer[iRet] = '\0';
            printf("%s",Buffer);       
        }

        close(fd);
    }
}

int main()
{
    char filename[30];
    int iNumChar = 0;

    printf("\nEnter File name : ");
    scanf("%s",filename);

    printf("Enter Number of Characters : ");
    scanf(" %d",&iNumChar);

    DisplayN(filename, iNumChar);

    return 0;
}