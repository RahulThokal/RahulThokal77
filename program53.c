#include<stdio.h>

void  displaydigites(int ino)
{
   int idigit=0;

  

   while(ino>0)
   {

    idigit =ino%10;
    printf("%d\n",idigit);
    ino=ino/10;
   }



}


int main()
{

    int ivalue=0;

    printf("Enter number..\n");
    scanf("%d",&ivalue);

    displaydigites(ivalue);


    return 0;
}