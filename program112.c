#include<stdio.h>

void display(int ino)
{
    int icnt=0;

    for(icnt=-ino;icnt<=ino;icnt++)
    {
    

        printf("%d\t",icnt);
    }
    

      
    
    printf("\n");




}
int main()
{

    int ivalue=0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    display(ivalue);



    return 0;
}