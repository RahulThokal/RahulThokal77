#include<stdio.h>
int main()
{
    int arr[4];
    int icnt=0;
    
    printf("Please enter the value :\n");

    for(icnt=0;icnt<4;icnt++)
    {
        scanf("%d",&arr[icnt]);
    }

    
    
    printf("values from the array are :\n");

       for(icnt=0;icnt<4;icnt++)
    {
        printf("%d\n",arr[icnt]);

    }

    

      

    




    return 0;
}