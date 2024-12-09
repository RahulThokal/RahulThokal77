

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

    DisplayR();





    return 0;
}