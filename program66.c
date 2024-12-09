#include<stdio.h>
int main()
{
    int arr[4];
    int icnt=0;
    int isum=0;
    
    printf("Please enter the value :\n");

    for(icnt=0;icnt<4;icnt++)
    {
        scanf("%d",&arr[icnt]);
    }

    for(icnt=0;icnt<4;icnt++)
    {

        isum=isum+arr[icnt];
    }

    printf("addition is :%d\n",isum);


   
    
    
   

    

      

    




    return 0;
}