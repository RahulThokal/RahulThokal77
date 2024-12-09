#include<stdio.h>

void DisplayR(int ino)
{
   static int icnt=1;
    

  
    if(icnt<=ino)
    {
         printf("%d\n",icnt);
         icnt++;
         DisplayR(ino);
    }
  



}




int main()
{

    int ivalue=0;
    printf("ENter the fequncy \n");
    scanf("%d",&ivalue);

    DisplayR(ivalue);

    printf("End of main \n");





    return 0;
}