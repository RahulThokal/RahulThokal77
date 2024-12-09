#include<stdio.h>

int countodddigits(ino)
{
    int idigit=0;
    int icount=0;

    if( ino<0)
    {
        ino=-ino;
    }



    while(ino>0)
    {
        idigit= ino%10;

        if(idigit %2!=0)
        

        {
        icount++;
        }
        ino=ino /10;
    }

    return icount;


}



int main()
{

    int ivalue=0, iret=0;

    printf("Enter number..\n");
    scanf("%d",&ivalue);

    iret=countodddigits(ivalue);

    printf(" number of digit is %d\n",iret);






    return 0;
}