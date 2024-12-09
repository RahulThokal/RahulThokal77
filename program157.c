#include<stdio.h>
int main()
{
    char arr[30];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    printf("Entered string is :%s\n",arr);



    return 0;
}