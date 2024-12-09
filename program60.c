#include<stdio.h>


int sumevendigit(int ino)
{

    int idigit=0;
   int isum=0;

   if(ino < 0) //if input is negativ convert to positive
   {
    ino=-ino;  //convert to positive
   }

   while(ino >0)
   {
    idigit=ino % 10;
    if(idigit % 2==0)
    {
    isum=isum+idigit;
    }
    ino=ino/10;
   }

   return isum;



} 

int main()
{

   int ivalue=0;
   int iret=0;

   printf("enter numbe\n");
   scanf("%d",&ivalue);

   iret = sumevendigit(ivalue);

   printf("suumetion of digite is : %d\n",iret);




    return 0;
}