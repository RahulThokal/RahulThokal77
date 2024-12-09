#include<stdio.h>

#include<string.h>



int main()
{
    char arr[30];
    int iret=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iret=strlen(arr);
    printf("string length is :%d\n",iret);

    


    return 0;
}