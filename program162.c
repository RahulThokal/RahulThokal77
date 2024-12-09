#include<stdio.h>

int strlenX(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        str++;
        icnt++;
    }
    return icnt;
}



int main()
{
    char arr[30];
    int iret=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iret=strlenX(arr);
    printf("string length is :%d\n",iret);

    


    return 0;
}