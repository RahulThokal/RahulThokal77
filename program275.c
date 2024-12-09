#include<stdio.h>

void DisplayI(int ino)
{
 
    while(ino>=1)
    {
         printf("%d\n",ino);
         ino--;
         
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