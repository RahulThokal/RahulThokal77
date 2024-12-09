
#include<stdio.h>

int addition (int ino)
{
 int isum=0;
 int icnt=0;
    while(icnt<=ino)
    {
         isum=isum+icnt;
         icnt++;
        
         
    }
    return isum;
   
  



}




int main()
{

    int ivalue=0, iret=0;
    printf("ENter the fequncy \n");
    scanf("%d",&ivalue);

    iret=addition(ivalue);

    printf("addition is %d\n",iret);





    return 0;
}