#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int CountSmall(char Fname[])
{
    int fd = 0;
    int iSmll = 0;
    int iRet = 0;
    int iCnt = 0;
    char Buffer[1024];

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File opened with %d fd",fd);
        
        while((iRet = read(fd,Buffer,sizeof(Buffer))) > 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if(Buffer[iCnt] >= 'a' && Buffer[iCnt] <= 'z')
                {
                    iSmll++;
                }
            }
        }

        close(fd);
    }

    return iSmll;
}

int main()
{
    char filename[30];
    int iRet = 0;

    printf("Enter File name : ");
    scanf("%s",filename);

    iRet = CountSmall(filename);

    printf("\nNUmber of Small letters are : %d",iRet);

    return 0;
}