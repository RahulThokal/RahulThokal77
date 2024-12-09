#include<stdio.h>
#include<stdlib.h>

int addition(int arr[],int isize)
{
    int icount=0,isum=0;
    for(icount=0;icount<isize;icount++)
    {
        isum=isum+arr[icount];





    }
    return isum;




}
int main()
{

    int ilength=0, icnt=0,iret=0;
    int *ptr=NULL;

    printf("enter the element :\n");
    scanf("%d",&ilength);

    ptr=(int *)malloc (ilength * sizeof(int));

    printf("Enter the element :\n");

    for(icnt=0; icnt<ilength; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iret=addition(ptr,ilength);

    printf("addition is :%d\n",iret);



    free(ptr);



    return 0;
}