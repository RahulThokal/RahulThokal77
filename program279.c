
#include<stdio.h>

int additionR (int ino)
{
 static int isum=0;
 static int icnt=1;
    if(icnt<=ino)
    {
         isum=isum+icnt;
         icnt++;
         additionR(ino);
        
         
    }
    return isum;
   
  



}




int main()
{

    int ivalue=0, iret=0;
    printf("ENter the fequncy \n");
    scanf("%d",&ivalue);

    iret=additionR(ivalue);

    printf("addition is %d\n",iret);





    return 0;
}