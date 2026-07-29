#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

void DisplaySize(char FileName[])
{
    struct stat sobj;

    if(stat(FileName,&sobj) == -1)
    {
        printf("unable to open file, it doesnt exist\n");
    }
    else
    {
        printf("File size is : %ld bytes\n",(long)sobj.st_size);
    }
}

int main()
{
    char fName[30] = {'\0'};

    printf("Enter the File Name : ");
    scanf("%[^'\n']s",fName);

    DisplaySize(fName);
    
    return 0;
}