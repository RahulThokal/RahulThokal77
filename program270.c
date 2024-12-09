

#include<stdio.h>

void DisplayR()
{
    static int icnt=1;

   
   if(icnt <= 4)
    {
         printf("*\n");
         icnt++;
         DisplayR();  //Rescursive call
    }
  



}




int main()
{

    printf("Inside main \n");

    DisplayR();

     printf("end of main \n");





    return 0;
}