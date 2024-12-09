#include<stdio.h>
#include<stdlib.h>

void function(int arr[],int isize)
{




}
int main()
{

    int ilength=0, icnt=0;
    int *ptr=NULL;

    printf("enter the element :\n");
    scanf("%d",&ilength);

    ptr=(int *)malloc (ilength * sizeof(int));

    printf("Enter the element :\n");

    for(icnt=0; icnt<ilength; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    function(ptr,ilength);



    free(ptr);



    return 0;
}