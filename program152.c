#include<stdio.h>

int count(char *ptr)
{
    int icount=0;

    while(*ptr!='\0')
   {
    if(*ptr=='a')
    {
         icount++;

    }

   
   ptr++;
   
   }
   return icount;
}




int main()
{
   char arr[30];
   int iret=0;
   



   printf("enter string \n");
   scanf("%[^'\n']s",arr);

 iret =count(arr);
 printf("your count is :%d\n",iret);

   
   






    return 0;
}