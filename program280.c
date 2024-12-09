
#include<stdio.h>

int countdigitI(int ino)
{

 int icnt=0;
    while(ino !=0)
    {
         
         icnt++;
         ino = ino / 10;
         
    }
    return icnt;
   
  



}




int main()
{

    int ivalue=0, iret=0;
    printf("ENter the number \n");
    scanf("%d",&ivalue);

    iret=countdigitI(ivalue);

    printf("number of digit is %d\n",iret);





    return 0;
}