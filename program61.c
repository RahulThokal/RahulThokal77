#include<stdio.h>


int reverse(int ino)
{

    int idigit=0;
   int irev=0;

   if(ino < 0) //if input is negativ convert to positive
   {
    ino=-ino;  //convert to positive
   }

   while(ino >0)
   {
    idigit=ino % 10;
    irev=irev * 10+idigit;
    ino=ino/10;
   }

   return irev;



} 

int main()
{

   int ivalue=0;
   int iret=0;

   printf("enter numbe\n");
   scanf("%d",&ivalue);

   iret = reverse(ivalue);

   printf("reverse valueis : %d\n",iret);




    return 0;
}