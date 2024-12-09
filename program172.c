#include<stdio.h>

void update(char *str)
{
    while(*str!='\0')
    {
        if(*str=='a')
        {
            *str='d';
        }
        str++;
    }
  

   
}



int main()
{
    char arr[30];
   
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    update(arr);
    printf("string after update is :%s\n",arr);

   
   

    
    


    return 0;
}