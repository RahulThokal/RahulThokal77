#include<stdio.h>
#include<stdbool.h>

bool checkdivisible(int ino)
{
    int icnt=0;

    icnt=ino % 5;
    

    if(icnt==0)

    
    {
       return true;
    
    }
    else
    {
        return false;
    }


}
int main()
{

    int ivalue=0;

    bool bflag=false;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    bflag=checkdivisible(ivalue);

    if(bflag==true)
    {
        printf("%d is divisible by5\n",ivalue);
    }
    else
    {
        printf("%d is not divisible by5\n",ivalue);

    }


    return 0;
}