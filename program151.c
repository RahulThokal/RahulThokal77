#include<stdio.h>

int strlenx(char *ptr)
{
    int icount=0;

    while(*ptr!='\0')
   {

   icount++;
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

 iret =strlenx(arr);
 printf("length of string is :%d\n",iret);

   
   






    return 0;
}