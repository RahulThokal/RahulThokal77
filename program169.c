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

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iret=count(arr,'m');
    printf("number of count m is :%d\n",iret);

    


    return 0;
}