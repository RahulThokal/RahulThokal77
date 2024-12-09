#include<stdio.h>

int count(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str=='m')
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

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iret=count(arr);
    printf("number of count m is :%d\n",iret);

    


    return 0;
}