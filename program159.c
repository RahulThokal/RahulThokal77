#include<stdio.h>

void display(char *str)
{
    printf("enterd string is :\n");

    while(*str!='\0')
    {
        printf("%c\n",*str);
        str++;
    }


}
int main()
{
    char arr[30];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    display(arr);



    return 0;
}