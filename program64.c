#include<stdio.h>
int main()
{
    int arr[4];
    int icnt=0;

    printf("Please enter the value :\n");

    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);

    printf("values from the array are :\n");

       for(icnt=0;icnt<4;icnt++)
    {
        printf("%d\n",arr[icnt]);

    }

    

      

    




    return 0;
}