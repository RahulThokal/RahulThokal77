#include<stdio.h>

void display(int *ptr,int isize)

{
    int icnt=0;

    printf("value of array are:\n");
    
    for(icnt=0;icnt<isize;icnt++)

   
    {
         printf("%d\n",*ptr);
          ptr++;
    }
  






}
int main()
{
    int arr[6];
    int icnt=0;
   
    printf("Please enter the value :\n");

    for(icnt=0;icnt<6;icnt++)
    {
        scanf("%d",&arr[icnt]);
    }

   display(arr,6);

   
    
    
    return 0;
}