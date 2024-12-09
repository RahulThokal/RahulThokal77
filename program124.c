





#include<stdio.h>

void display(int irow,int icol)
{

    int i=0;
    int j=0;

    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
           if(i==j)
           {
            printf("0\t");
           }
           else{
            printf("%d\t",j);
           }
        }
        printf("\n");
    }
   


}
int main()
{

    int ivalue1=0 , ivalue2=0;

    printf("Enter number of rows\n");
    scanf("%d",&ivalue1);
    printf("Enter number of columns\n");
    scanf("%d",&ivalue2);


    display(ivalue1,ivalue2);



    return 0;
}