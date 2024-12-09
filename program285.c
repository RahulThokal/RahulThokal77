
#include<stdio.h>

int countevenR(int ino)
{

  static int icount=0;
  static int idigit=0;

   if(ino !=0)
    {
         
     idigit=ino % 10;
     if(idigit %2==0)
     {

        icount++;
     }
     ino=ino/10;
     countevenR( ino);
         
         
    }
    return icount;
   
  



}




int main()
{

    int ivalue=0, iret=0;
    printf("ENter the number \n");
    scanf("%d",&ivalue);

    iret=countevenR(ivalue);

    printf("sum of digit is %d\n",iret);





    return 0;
}