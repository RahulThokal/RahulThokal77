#include<stdio.h>

void strlwrx(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            *str=*str +32;
        }
        str++;
    }
  

   
}



int main()
{
    char arr[30];
   
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);
    printf("string after update is :%s\n",arr);

   
   

    
    


    return 0;
}