#include<stdio.h>

int count(char *str,char ch)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
             icnt++;

        }
        str++;
       
    }
    return icnt;
}



int main()
{
    char arr[30];
    int iret=0;
    char cvalue='\0';

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :\n");
    scanf("%c",&cvalue);

    iret=count(arr,cvalue);
    printf("number of count  is :%d\n",iret);

    


    return 0;
}