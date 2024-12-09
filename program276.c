#include<stdio.h>

void DisplayR(int ino)
{
 
    if(ino>=1)
    {
         printf("%d\n",ino);
         ino--;
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