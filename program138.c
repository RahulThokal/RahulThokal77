#include<stdio.h>

void display(int irow,int icol)
{
    int i=0,j=0;

  

    if(irow!=icol)
    {

        printf("invalid input");
        return;
    }


    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if(i>=j)  //digonal
            {

                printf("*\t");
            }
           
        }
        printf("\n");

    }







}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("Enter number of row \n");
    scanf("%d",&ivalue1);

     printf("Enter number of collum\n");
    scanf("%d",&ivalue2);

    display(ivalue1,ivalue2);






    return 0;
}