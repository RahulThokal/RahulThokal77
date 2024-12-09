#include<stdio.h>

int countsmall(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
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

    iret=countsmall(arr);
    printf("number of count space  is :%d\n",iret);

    


    return 0;
}