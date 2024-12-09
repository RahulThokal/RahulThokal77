#include<stdio.h>
#include<stdlib.h>
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

    printf("element of the array are :\n");
    for(icnt=0; icnt<ilength; icnt++)
    {
        printf("%d\n",ptr[icnt]);
    }






    free(ptr);



    return 0;
}