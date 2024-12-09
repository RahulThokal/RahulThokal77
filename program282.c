
#include<stdio.h>

int sumdigitI(int ino)
{

  int isum=0;

    while(ino !=0)
    {
         
       isum=isum+(ino % 10);
         ino = ino / 10;
         
         
    }
    return isum;
   
  



}




int main()
{

    int ivalue=0, iret=0;
    printf("ENter the number \n");
    scanf("%d",&ivalue);

    iret=sumdigitI(ivalue);

    printf("sum of digit is %d\n",iret);





    return 0;
}