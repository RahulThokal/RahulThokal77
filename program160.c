#include<stdio.h>

void display(char *str)
{
    int i=0;
    printf("enterd string is :\n");

    for(i=0;str[i]!='\0';i++)
            {
        printf("%c\n",str[i]);
        
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