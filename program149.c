#include<stdio.h>




int main()
{
   char arr[30];
   char *ptr=arr;



   printf("enter string \n");
   scanf("%[^'\n']s",arr);

   while(*ptr!='\0')
   {

   printf("%c\n",*ptr);
   ptr++;
   }

   
   






    return 0;
}