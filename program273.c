#include<stdio.h>

void DisplayI(int ino)
{
    int icnt=0;
    

   icnt=1;
    while(icnt<=ino)
    {
         printf("%d\n",icnt);
         icnt++;
         
    }
  



}




int main()
{

    int ivalue=0;
    printf("ENter the fequncy \n");
    scanf("%d",&ivalue);

    DisplayI(ivalue);

    printf("End of main \n");





    return 0;
}