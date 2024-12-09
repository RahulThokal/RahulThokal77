#include<stdio.h>

int countspace(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
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

    iret=countspace(arr);
    printf("number of count space  is :%d\n",iret);

    


    return 0;
}