
#include<stdio.h>

int countdigitR(int ino)
{

 static int icnt=0;
    if(ino !=0)
    {
         
         icnt++;
         ino = ino / 10;
          countdigitR( ino);
         
    }
    return icnt;
   
  



}




int main()
{

    int ivalue=0, iret=0;
    printf("ENter the number \n");
    scanf("%d",&ivalue);

    iret=countdigitR(ivalue);

    printf("number of digit is %d\n",iret);





    return 0;
}