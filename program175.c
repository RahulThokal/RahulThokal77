#include<stdio.h>

void strtogalx(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
        {
            *str=*str-32;
        }
        else if(*str>='A'&&*str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
  

   
}



int main()
{
    char arr[30];
   
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strtogalx(arr);
    printf("string after update is :%s\n",arr);

   
   

    
    


    return 0;
}