
#include<stdio.h>

int sumdigitR(int ino)
{

  static int isum=0;

   if(ino !=0)
    {
         
       isum=isum+(ino % 10);
         ino = ino / 10;
         sumdigitR(ino);
         
         
    }
    return isum;
   
  



}




int main()
{

    int ivalue=0, iret=0;
    printf("ENter the number \n");
    scanf("%d",&ivalue);

    iret=sumdigitR(ivalue);

    printf("sum of digit is %d\n",iret);





    return 0;
}