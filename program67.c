#include<stdio.h>

void display(int *ptr)

{

    printf("value of array are:\n");
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;

printf("%d\n",*ptr);
    ptr++;

printf("%d\n",*ptr);
  






}
int main()
{
    int arr[4];
    int icnt=0;
   
    printf("Please enter the value :\n");

    for(icnt=0;icnt<4;icnt++)
    {
        scanf("%d",&arr[icnt]);
    }

   display(arr);

   
    
    
    return 0;
}