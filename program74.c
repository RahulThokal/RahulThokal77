#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ilength=0;
    int *ptr=NULL;

    printf("enter the element :\n");
    scanf("%d",&ilength);

    ptr=(int *)malloc (ilength * sizeof(int));

    free(ptr);



    return 0;
}