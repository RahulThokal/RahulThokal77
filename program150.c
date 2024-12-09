#include<stdio.h>

void display(char *ptr)
{

    while(*ptr!='\0')
   {

   printf("%c\n",*ptr);
   ptr++;
   
   }
}




int main()
{
   char arr[30];
   



   printf("enter string \n");
   scanf("%[^'\n']s",arr);

  display(arr);

   
   






    return 0;
}