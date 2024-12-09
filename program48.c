//time complexcity concept icnt<=ino/2;
#include<stdio.h>
void displayfactor(int ino)
{
   int  icnt=0;

    printf("factor of %d are  :\n",ino);

    for(icnt=1; icnt<=ino/2; icnt++)
    {
        if(ino % icnt==0)
        {

            printf("%d\n",icnt);

        }
    }


}



int main()
{
    int ivalue=0;

    printf("enter number..\n");
    scanf("%d",&ivalue);

    displayfactor(ivalue);

    




    return 0;
}