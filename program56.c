#include<stdio.h>

int countdigits(ino)
{
    
    int icount=0;

    if( ino<0)
    {
        ino=-ino;
    }



    while(ino>0)
    {
        
        icount++;
        ino=ino /10;
    }

    return icount;


}



int main()
{

    int ivalue=0, iret=0;

    printf("Enter number..\n");
    scanf("%d",&ivalue);

    iret=countdigits(ivalue);

    printf(" number of digit is%d\n",iret);






    return 0;
}