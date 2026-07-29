#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int CountCapital(char Fname[])
{
    int fd = 0;
    int iCap = 0;
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
                if(Buffer[iCnt] >= 'A' && Buffer[iCnt] <= 'Z')
                {
                    iCap++;
                }
            }
        }

        close(fd);
    }

    return iCap;
}

int main()
{
    char filename[30];
    int iRet = 0;

    printf("Enter File name : ");
    scanf("%s",filename);

    iRet = CountCapital(filename);

    printf("\nNUmber of captal letters are : %d",iRet);

    return 0;
}