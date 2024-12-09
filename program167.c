#include<stdio.h>

int countvowel(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
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

    iret=countvowel(arr);
    printf("number of vowelis  :%d\n",iret);

    


    return 0;
}